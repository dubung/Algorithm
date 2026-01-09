#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    queue<int> pricesQueue;
    vector<int> answer;
    for (int& price : prices) { // 큐에 넣어주고
        pricesQueue.push(price);
    }
    for(int i = 0; i < prices.size();i++) {
        int price = pricesQueue.front();// 큐의 맨 앞을 뺌
        pricesQueue.pop(); // 큐에서 뺌  
        int iday = 0; // 방금 뺀 가격이 몇초간 안내릴지 
        for (int j = i; j < prices.size(); j++) {
            if (price > prices[j]  || j == prices.size()-1) {// 마지막이거나 가격이 떨어지면
                answer.push_back(iday);
                break;
            }
        iday++; //떨어지지않으면 ++ 
        }


    }
    return answer;
}