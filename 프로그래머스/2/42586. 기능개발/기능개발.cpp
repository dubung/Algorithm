#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
     vector<int> answer;

  
 queue<int> answerQueue;

 for (int i = 0; i < progresses.size(); i++) {
     answerQueue.push(progresses[i]);
 }

 int iDay = 1;
 int iCnt = 0;
 while (1){

     if (answerQueue.size() != 0 &&(iDay * (speeds[progresses.size() - answerQueue.size()]) + answerQueue.front() > 99)) {
         answerQueue.pop();
         iCnt++;
         continue;
     }
     if (iCnt)
         answer.push_back(iCnt);
     iCnt = 0;
     iDay++;

     if (answerQueue.empty())
         break;
 }

 if (!answerQueue.empty())
     answer.push_back(iCnt);
    
     return answer;
}