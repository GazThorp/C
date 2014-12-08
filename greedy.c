#include <stdio.h>
#include <math.h>
#include <cs50.h>;

int main(void){
    float input = 0.f;
    int chg = 0;
    int diff = 0;
    int best = 0;
    int coin[] = {25,10,5,1};

    while(input <= 0.00){
        printf("How much change is owed (must be positive): ");
        input = GetFloat();
    }
    
    chg = (int)((input * 100) + 0.05);
    
    for(int i = 0, n = sizeof(coin); i <= n ; i++){
        if (chg >= coin[i]){
            diff = chg % coin[i];
            best = best + (chg - diff) / coin[i];
            chg = diff;
            if (chg == 0){
                break;
            }
        } 
    }
    
    printf("Least amount of coins possible: %i\n", best);
    
}
