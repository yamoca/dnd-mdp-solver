#include <stdio.h>

/*

first solve the most basic version of the problem

you have an enemy with a certain amount of hp
you can do a high power attack with a lower chance of hitting
you can do a low power attack with a higher chance of hitting

*/


struct AttackAction {
    int avgDamage;
    float hitChance; 
};

struct Enemy {
    


struct State {
    struct Action availableActions[5];
    // have to assign size of array which is a bit goof
    // shouldnt have more than 5 actions
    // can help to act as a performance filter
    // ideally find a better way but c hates dynamic arrays
};

struct State states[] = {};

State transition(State currentState, Action action) {
    State nextState = ...;
    return nextState;
}


int main() {
    printf("hello \n");
    struct Action action1 = {1};
    struct Action action2 = {2} ;
    
    struct State state1 = {{action1, action2}};
    return 0;
}
