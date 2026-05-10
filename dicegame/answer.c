/* answer.c */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int myRandom(int max)
{
  int x;

  /* create a random number between 1 and  max */
  x = rand() % max + 1;

  return x;
}

int main()
{
  int balance, bet, guess, dice;
  
  /* seeding the random number generator */
  srand(getpid());
  
  balance = 1000;

  while(1)

  {

    printf("Make your bet\n");
    fflush(stdout);
    scanf("%d", &bet);

    printf("Make your guess (1-6) and 0 means quit\n");
    scanf("%d", &guess);

    /* User presses 0 in order to quit the dice game */
    if(guess == 0)
      return 0;

    printf("Throwing the dice ...\n");
    sleep(2);

    dice = myRandom(6);

    printf("Dice : %d\n",dice );

    if(guess != dice)
    {
      balance -= bet; 
      printf("Sorry you lost\n");
    }else{
      bet *= 3;
      balance += bet;
      printf("You won! Congrats!\n");
    }


    if (balance == 0)
    {
      printf("Exit the game\n");
      return 0;
    }

    printf("Balance: $%d\n", balance);

  }
  return 0;
}

