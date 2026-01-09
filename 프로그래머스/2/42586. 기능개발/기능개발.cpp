#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

  
    queue<int> answerQueue;

    for (int i = 0; i < progresses.size(); i++) { // 큐에 넣어줌
        answerQueue.push(progresses[i]);
    }  

    int iDay = 1; // 며칠 흘렀을까요
    int iCnt = 0; // 해당일에 끝낸 작업을 나타낼 변수
    while (1){

    if (answerQueue.size() != 0 && (iDay * (speeds[progresses.size() - answerQueue.size()]) + answerQueue.front() > 99)) { // 일수 * 1일당작업량이 99보다 크다면
         answerQueue.pop(); //작업 큐 제거
         iCnt++; 
         continue;
     }
     if (iCnt) // 완료된 작업이 있다면 작업된 갯수 push
         answer.push_back(iCnt);
     iCnt = 0;
     iDay++;

     if (answerQueue.empty())// 작업 큐가 비지않았다면
         break;
    }

    
     return answer;
}