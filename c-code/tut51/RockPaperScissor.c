#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumbers(int n)
{
    srand(time(NULL)); // srand take seed as an input and is defined inside stdlib.h
    return rand() % n;
}
/*
 *** Create Rock Paper Scissor Game *** 
 Player 1: Rock
 Player 2: (Computer):Scissor --:> player 1 gets 1 point 

 rock vs scissor - rock wins
 paper vs scissor - paper wins 
 paper vs rock - rock wins

 Write a C Programme to allow user to play this game three times with computer.
 log the scores of computer and the player.
 Display the name of the winner at the end .
 

 
 */
int main()
{
    /*-------CODE-------*/
    printf("The Random Number between 0 to 5 is %d\n",generateRandomNumbers(5));
    return 0;
}