#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // generates a randomno between 1 and 100
    printf("the number is %d", number);
    //keep  running the loop untill number is guesed
    do{
        printf("guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower no please!\n");
        } 
        else if(guess<number){
            printf("higher no please!\n");
        }
        else{
            printf("you guessed it in %d attempts\n", nguesses);
        }
        nguesses++;

    }while(guess!=number);
return 0;
}
