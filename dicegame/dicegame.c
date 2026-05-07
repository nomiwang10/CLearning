/* dice game */
/*  In this game, we are developping a game where you have $1000 from the start.
 You bet fake dollars, throw the dice and either lose the bet or you win and triple your bet.
 The goal of the game is winning as much money as possible and then quit playing the game while on top */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int dice_generator()
{
  return (rand() % 6 + 1);
}

int main()
{
  int balance = 1000; // in the beginning of the game, the player has $1000 from the start
  int bet = 0; // the amount of money the user want to bet on
  int guess = 1; // ask the user to guess a number between 1 and 6
  int dice = 0; // the random dice number generator

  srand(getpid());
  
  while(guess != 0)
  {
    printf("How much do you want to bet?\n");
    scanf("%d", &bet);
    printf("The user is betting $%d\n", bet);// just for debugging purpose
    printf("Guess a number between 1 and 6\nInput 0 to quit the game\n");
    scanf("%d", &guess);
    if(guess == 0)
      return 0; // if user input 0, then quit the game
    printf("The user's guess is %d\n", guess);
    sleep(2); // pause the game for 2 seconds


    dice = dice_generator(); //genrate a random number between 1 and 6 (emulate the dice)

    printf("The value of a dice roll is %d\n", dice);
    
    if(balance > 0)
    {
      if(guess != dice)
      {
        balance -= bet;
        printf("Wrong guess. Your current balance is %d\n", balance);
        if(balance <= 0){
          break;
        }
      }else{
         bet *= 3;
         balance += bet;
         printf("Right guess. Your current balance is %d\n", balance);
      }
    }
  }
  printf("GG bruh\n");

  return 0;
} 
