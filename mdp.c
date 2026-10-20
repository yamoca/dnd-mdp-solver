#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

first solve the most basic version of the problem

you have an enemy with a certain amount of hp
you can do a high power attack with a lower chance of hitting
you can do a low power attack with a higher chance of hitting

*/


struct AttackAction {
    float avgDamage;
    int numberOfDice;
    int dieSize;

    
    int hitChance; // x/100 is easier than a decimal
};

struct StateOfEnemy {
    int hp;
};

int roll(int numberOfDice, int dieSize) {
    int total = 0;
    for (int i = 0; i < numberOfDice; i++) {
        total += ((rand() % dieSize) + 1); //+1 is because min of rand is 0
    }
    return total;
}


struct StateOfEnemy transition(struct StateOfEnemy prevEnemyState, struct AttackAction attack) {
    // check for a hit
    if (((rand() % 100) + 1) <= attack.hitChance) {
        // hit
        printf("hit!\n");
        int damage = roll(attack.numberOfDice, attack.dieSize);
        struct StateOfEnemy newEnemyState = {
            .hp = prevEnemyState.hp - damage
        };
        return newEnemyState;
    } else {
        printf("miss!\n");
        // miss: nothing happened, return unchanged state
        return prevEnemyState;
    }
}


int main() {
    // seed rand
    srand(time(NULL));
    
    struct AttackAction heavyAttack = {
        .avgDamage = 6.5,
        .numberOfDice = 1,
        .dieSize = 12,
        .hitChance = 50
    };
    struct AttackAction lightAttack = {
        .avgDamage = 3.5,
        .numberOfDice = 1,
        .dieSize = 6, 
        .hitChance = 75
    };
    struct StateOfEnemy testEnemy = {
        .hp = 1
    };
    
    struct StateOfEnemy testEnemyAfter = transition(testEnemy, lightAttack);
    printf("after a light attack, the health of the enemy was: %d\n", testEnemyAfter.hp);    

 
    return 0;
}
