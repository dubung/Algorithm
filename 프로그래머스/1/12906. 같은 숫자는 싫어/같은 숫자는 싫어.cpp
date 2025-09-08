#include <vector>
#include <iostream>
#include <stack>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    stack<int> answerSt;

    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (!answerSt.empty())
        {
            int temp = answerSt.top();
            if (temp == arr[i])
                continue;
            else {
                answer.push_back(temp);
                answerSt.pop();
            }
        }
        answerSt.push(arr[i]);
    }

  if (!answerSt.empty())
  {
      int temp = answerSt.top();
      answer.push_back(temp);
  }

    return answer;
}