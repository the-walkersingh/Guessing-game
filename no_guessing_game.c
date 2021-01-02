#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;//Generates a random number between 1 to 100
    //printf("The number is %d", number);
    //keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100=\n");
        scanf("%d", &guess);

        if(guess>number)
        printf("Lower number please...!\n\n");

        else if(guess<number)
        printf("Higher number please...!\n\n");

        else {
        printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    printf("Hope you enjoyed the game\n");
    return 0;

}