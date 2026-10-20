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

/*
struct State {
    struct Action availableActions[5];
    // have to assign size of array which is a bit goof
    // shouldnt have more than 5 actions
    // can help to act as a performance filter
    // ideally find a better way but c hates dynamic arrays
};
*/
// struct State states[] = {};

/*
State transition(State currentState, Action action) {
    State nextState = ...;
    return nextState;
}
*/



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
