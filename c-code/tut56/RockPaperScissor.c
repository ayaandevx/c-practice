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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumbers(int n)
{
    srand(time(NULL)); 
    return rand() % n;
}

int greater(char char1 , char char2)
{
    if (char1 == char2)
    {
      return -1;   
    }
    else if((char1 == 'r')&& (char2 == 's'))
    {
        return 1;
    }
    else  if((char2 == 'r')&& (char1 == 's'))
    {
        return 0;
    } 
    else if((char1 == 'p')&& (char2 == 'r'))
    {
        return 1;
    }
    else if((char2 == 'p')&& (char1 == 'r'))
    {
    
        return 0;
    }
     else if((char1 == 's')&& (char2 == 'p'))
    {
        return 1;
    }
    else if((char2 == 's')&& (char1 == 'p'))
    {
    
        return 0;
    }

}

int main()
{
    int playerScore =0,compScore=0,temp;

    char playerChar, compChar;

    char dict[] = {'r','p','s'};
    
    printf("Welocme to the Rock, Paper, Scissors.\n");
    printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
    for(int i=0; i<3; i++)
    {

    // Take Your input
     printf("Your's Turn:\n");
     scanf("%d",&temp);
     playerChar = dict[temp-1];
     printf("You choose %c\n\n",playerChar);

    // Generate computer's input
     printf("Computer's Turn:\n");
     temp = generateRandomNumbers(3)+1;
     compChar = dict[temp-1];
     printf("Computer choose %c\n\n",compChar);
    }

    // Compare the score
    if(greater(compChar,playerChar)== 1)
    {
        compScore+=1;
    }
    else if(greater(compChar,playerChar)== -1)
    {
       compScore +=1;
       playerScore +=1;
    }
    else
    {
        playerScore +=1;
    }
    printf("You: %d\nCPU: %d",playerScore,compScore);

    if(playerScore > compScore)
    {
        printf("You win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU Win the game\n");
    }
    else
    {
        printf("Its a draw\n");
    }
    


    return 0;
}