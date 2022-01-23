#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // condition for draw
    if(you==comp){
        return 0;
    }
    // not draw conditions
    // sw ws
    // sg gs 
    // wg gw
    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }    

}   

    int main(){
        char you,comp;
        srand(time(0));
   int number = rand()%100 + 1;
    if(number<33){

        comp='s';
    } 
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    
    printf("enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = snakewatergun(you,comp);
    printf("you chose %c and computer chose %c.", you, comp); 
    if(result ==0){
        printf("game draw\n");
    }
    else if(result ==1){
        printf("game win\n");
    }
    else{
        printf("game lose\n");
    }
return 0;
}