#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int prev(int time, int op_start, int op_end){
   
    
    if(op_start <= time && time <= op_end)
        time = op_end;
    
    if((time % 100) < 10 ){
        time = time - 50;
    }
    else{
        time -= 10;
    }
    if(op_start <= time && time <= op_end)
        time = op_end;
    if(time < 0) time = 0;
    
    return time;
}
int next(int time, int op_start, int op_end, int video_len){
    
    
    if(op_start <= time && time <= op_end)
        time = op_end;
    
    if((time % 100) > 50 ){
        time = time + 50;
    }
    else{
        time += 10;
    }
    if(op_start <= time && time <= op_end)
        time = op_end;
    if(time > video_len) time = video_len;
    return time;
}
int getMin(char* video_lens){
    return (video_lens[0] - 48) * 10 + (video_lens[1] - 48);
    
}
int getSec(char* video_lens){
    return (video_lens[3] - 48) * 10 + (video_lens[4] - 48);
}
// commands_len은 배열 commands의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* video_len, const char* pos, const char* op_start, const char* op_end, const char* commands[], size_t commands_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*5);
    
    
    int viedeo_time = getMin(video_len) * 100 + getSec(video_len);
    int pos_time = getMin(pos) * 100 + getSec(pos);
    int op_startTime = getMin(op_start)*100 + getSec(op_start);
    int op_endTime = getMin(op_end)*100 + getSec(op_end);
    
    
    for(int i = 0; i < commands_len; i++){
        
        if(strchr(commands[i],'n'))
        {
            pos_time = next(pos_time, op_startTime, op_endTime,viedeo_time);
            printf("asdf");
        }
        else{
            pos_time = prev(pos_time, op_startTime, op_endTime);
        }
        
    }
    
    answer[0] = (pos_time/1000) + 48; 
    answer[1] = (pos_time/100)%10 + 48;
    answer[2] = ':';
    answer[3] = (pos_time/10)%10 + 48;
    answer[4] = pos_time % 10 + 48;
    answer[5] = '\0';
    
    
    
    
    return answer;
}