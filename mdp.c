#include <stdio.h>

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

    
    float hitChance; 
};

struct StateOfEnemy {
    int hp;
};

int main() {
    printf("hello \n");
    struct Action heavyAttack = {
        .avgDamage = 6.5,
        .amountOfDice = 1,
        .dieSize = 12,
        .hitChance = 0.50
    };
    struct Action lightAttack = {
        .avgDamage = 3.5,
        .amountOfDice = 1,
        .dieSize = 6, 
        .hitChance = 0.75
    };
    struct Enemy testEnemy = {
        .hp = 10
    };

 
    return 0;
}
