#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand() % 10 + 1; //generate a randome number from 1 to 20 only !
    printf("The Random number is %d ",number);
    do
    {
        printf("Guess the number between 1 to 10 \n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please \n");

        }
        else if(guess<number)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("you guess right in it %d Attemps \n",nguess);
            nguess ++;
        }
    } while (guess!=number);
    
   return 0;
}