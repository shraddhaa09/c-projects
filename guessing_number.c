#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));//to initialize the random number generator with a different seed value each time the program runs

    printf("welcome to the world of the guessing numbers\n");
    random=rand()*100+1;
    do{
        printf("\nplease enter the number between (1 to 100)");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random){
            printf("guess larger number\n");    
        }else if(guess>random){
            printf("guess a smaller number \n");
        }else{
            printf("you have succesfully guessed the number in %d attempts",no_of_guess);
        }
    }
    while(guess!=random);

}