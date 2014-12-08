#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]){
    int k; //cipher key
    string s; //plain text
    
    if(argc != 2){
        printf("arg error: caeser requires 1 command line argument.\n");
        return 1;
    }
    
    k = atoi(argv[1]);
    
    printf("Please enter text to encrypt: ");
    s = GetString();
    int match;
    for(int i = 0, n = strlen(s); i <= n; i++){
        for(int j = 0; j < k; j++){
            if(isalpha(s[i])){
                match = 0;
                if(s[i] == 'z'){
                   s[i] = 'a';
                   match = 1;
                }
                if(s[i] == 'Z'){
                   s[i] = 'A';
                   match = 1;
                }
                if (match == 0){
                    s[i]++;
                }
            }
        }
    }
    
    printf("%s\n", s);
  
    return 0; 
}
