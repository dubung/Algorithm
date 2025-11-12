#include <string>
#include <vector>

using namespace std;

void combination(string word, vector<int>order, int index, int* answer, int*flag);
string DICCNT = "AEIOU";
int solution(string word) {
    int answer = 0;
    vector<int> order;
    int flag = 0;
    combination(word, order, 5, &answer, &flag);
    return answer;
}
void combination(string word, vector<int>order, int index, int* answer, int *flag)
{
    if (index == 0)
        return;

    for (int i = 0; i < 5; i++) {
        vector<int>tempOrder = order;
        string combiWord = "";

        tempOrder.push_back(i);
        for (int j = 0; j < tempOrder.size();j++) {
            combiWord += DICCNT[tempOrder[j]];
        }
        if (!word.compare(combiWord)) {
            *answer = *answer + 1;
            *flag = 1;
        }
        if (*flag)
            return;
        combination(word, tempOrder, index - 1, answer,  flag);
        *answer = *answer + 1;

    }

}

