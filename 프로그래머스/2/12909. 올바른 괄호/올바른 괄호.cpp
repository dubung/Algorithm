#include<string>
#include <iostream>
#include <stdbool.h>
#include <stack>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<bool> stackbool;
    
    for(int i = 0 ; s[i] != '\0';i++){ 
        if(s[i] == '(')
            stackbool.push(true); // ( 이면 푸쉬
        if(s[i] == ')') 
        {
            if(!stackbool.empty()){ // ) 이면 팝
                stackbool.pop();
            }
            else{ // 비어있는데 )을 하게되면 false 리턴
                return false;
            }
        }
    }
    
    if(!stackbool.empty())// 아직  스택에 남아있다면 false 리턴
        answer = false;
    
    return answer;

}