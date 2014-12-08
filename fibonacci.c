#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[]){
    int n; //fibonacci index
    int first = 0; //holds number n-2
    int second = 1; //holds number n-1
    int next; //holds the nth number in the sequence
    
     if(argc != 2){
        printf("arg error: caeser requires 1 command line argument.\n");
        return 1;
    }
    
    n = atoi(argv[1]);
    
    for(int i = 0 ; i < n; i++) {
        if(i <= 1) {
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        
        printf("%i\n", next);
        
    }
    return 0; 
}
