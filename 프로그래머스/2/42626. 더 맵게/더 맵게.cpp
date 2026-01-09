#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
//vector<int> heapTree(vector<int> scoville, int size, int rootIdx);
//vector<int> heapsort(vector<int> scoville);

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int lowScoville;
    int highScoville;
    priority_queue<int,vector<int>, greater<int>> scovilleMinHeap;
    
    for(int &val : scoville){
        scovilleMinHeap.push(val);
    }
    
    if(scovilleMinHeap.size() > 1)
    {
        while(1){
              
            if (scovilleMinHeap.top() >= K)
                return answer;
            if(scovilleMinHeap.size() ==1)
                return -1;

            lowScoville = scovilleMinHeap.top();
            scovilleMinHeap.pop();
            highScoville = scovilleMinHeap.top();
            scovilleMinHeap.pop();
            
            scovilleMinHeap.push(lowScoville + (highScoville * 2));
            answer++;

        }
    }
    else {
        if(scovilleMinHeap.top() >= K)
            return answer;
    }
    /*
    scoville = heapsort(scoville);
    if(scoville.size() == 1)
        return answer;
    while (scoville.size() > 1) {
        
        
        if (scoville.front() >= K)
            return answer;

        lowScoville = scoville[0];
        highScoville = scoville[1];
        scoville[1] = lowScoville + (highScoville * 2);
        scoville[0] = scoville.back();
        scoville.pop_back();
        answer++;

        scoville = heapsort(scoville);
    } 
    */
    return -1;
}

/*
vector<int> heapsort(vector<int> scoville) // 최대힙으로 만들 것임
{
    int size = scoville.size();
    vector<int> temp = scoville;
    for (int rootIdx = size / 2 - 1; rootIdx >= 0; rootIdx--) {
        temp = heapTree(temp, size, rootIdx);
    }
    return temp;
}

vector<int>  heapTree(vector<int> scoville, int size, int rootIdx) {
    int root = rootIdx;
    int left = 2 * rootIdx + 1; // 2 * rootIdx 이지만 root가 0부터 시작하니깐
    int right = 2 * rootIdx + 2;

    if (left < size && scoville[left] < scoville[root])
        root = left;
    if (right < size && scoville[right] < scoville[root])
        root = right;

    if (root != rootIdx) {
        swap(scoville[rootIdx], scoville[root]);
        scoville = heapTree(scoville, size, root);
    }

    return scoville;
}
*/