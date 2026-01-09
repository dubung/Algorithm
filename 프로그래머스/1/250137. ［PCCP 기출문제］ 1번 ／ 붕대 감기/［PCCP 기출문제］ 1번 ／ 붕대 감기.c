#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// bandage_len은 배열 bandage의 길이입니다.
// attacks_rows는 2차원 배열 attacks의 행 길이, attacks_cols는 2차원 배열 attacks의 열 길이입니다.
int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    
    int maxHealth = health;
    int attachCnt = attacks_rows;
    int time = 0;
    int totalTime = 0;
    
    do{
        totalTime++;
        if(totalTime == attacks[attacks_rows - attachCnt][0]){ // 공격당할 때
            
            health -= attacks[attacks_rows - attachCnt][1];
            attachCnt--;
            time = 0;
            if(health <= 0)
                return -1;
        }
        else{
            
            time++;
            health += bandage[1];
            
            if(time == bandage[0]){
                time = 0;   
                health += bandage[2];
            }
            if(health > maxHealth)
                health = maxHealth;
        }
        
    }while(attachCnt!=0);
    
    
    return health;
}