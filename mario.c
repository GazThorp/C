#include <stdio.h>
#include <cs50.h>

int main(void){

    int height = 0;
    int hash = 2;
    
    while(height <= 0 || height > 23){
        printf("Please enter your chosen pyramid height between 1-23: ");
        height = GetInt();
    }
    
    while(height > 0){
        for(int i = (height-1); i > 0; i--){
            printf(" ");
        }
        
        for(int j = 0; j <= (hash - 1); j++){
            printf("#");
        }
        
        printf("\n"); 
        height--;
        hash++;
    }
}
