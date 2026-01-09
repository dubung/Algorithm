#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// schedules_len은 배열 schedules의 길이입니다.
// timelogs_rows는 2차원 배열 timelogs의 행 길이, timelogs_cols는 2차원 배열 timelogs의 열 길이입니다.
int solution(int schedules[], size_t schedules_len, int** timelogs, size_t timelogs_rows, size_t timelogs_cols, int startday) {
    
    int answer = 0;
    
    for(int j = 0; j < timelogs_rows;j++){
        bool isAward = true;
        for(int i = 0; i < timelogs_cols; i++){
            int deadline = ((schedules[j] + 10)%100 >= 60) ? schedules[j] + 100-60 +10 :schedules[j] + 10;
            if( (i + startday)%timelogs_cols != 0 && (i + startday)%timelogs_cols != 6)
                if(timelogs[j][i] > deadline){
                    isAward = false;
                    break;
            }
        }
        if(isAward)answer++;
    }
    return answer;
}