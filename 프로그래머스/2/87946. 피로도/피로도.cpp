#include <string>
#include <vector>

using namespace std;
bool isDuplicate(vector<int> order, int num);
void combination(vector<vector<int>> dungeons, vector<int>order, int index, int* answer, int k);
void CntProgress(vector<vector<int>> dungeons, vector<int>order, int* answer, int k);

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> order;
    combination(dungeons, order, dungeons.size(), &answer, k);
    return answer;
}


void combination(vector<vector<int>> dungeons, vector<int>order, int index, int* answer, int k)
{
    if (index < 0)
        return;

    for (int i = 0; i < dungeons.size(); i++) {
        vector<int>tempOrder = order;
        if (isDuplicate(order, i))
            continue;
        else {

            tempOrder.push_back(i);
            combination(dungeons, tempOrder, index - 1, answer, k);

            if (index == 1) {
                CntProgress(dungeons, tempOrder, answer,k);
            }
            
        }

    }

}


bool isDuplicate(vector<int> order, int num)
{

    for (int i = 0; i < order.size(); i++) {
        if (order[i] == num)
            return true;
    }

    return false;
}

void CntProgress(vector<vector<int>> dungeons, vector<int>order, int* answer, int k) {

    int tempCnt = 0;
    for (int i = 0;i < dungeons.size(); i++) {
        if (k >= dungeons[order[i]][0]) {
            k -= dungeons[order[i]][1];
            tempCnt++;
        }
        else {
            break;
        }
    }
    if (*answer < tempCnt)
        *answer = tempCnt;
}