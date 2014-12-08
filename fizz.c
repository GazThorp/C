#include <stdio.h>

int main(void){
    int printed;
    for(int i = 1;i <= 100; i++){ 
        printed = 0;
        if (i % 3 == 0){
            printf("Fizz");
            printed = 1;
        }
        if (i % 5 == 0){
            printf("Buzz");
            printed = 1;
        }
        if(printed == 0){
            printf("%i",i);
            
        }
        printf("\n");
    }
    
}
