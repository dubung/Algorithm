#include <string>
#include <vector>

#define SUPOJANUM 3
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector < vector<int>> supoja = {{1, 2, 3, 4, 5},
                                {2, 1, 2, 3, 2, 4, 2, 5},
                                {3, 3, 1, 1, 2, 2, 4, 4, 5, 5} 
                                };
    int arrCorrect[SUPOJANUM] = {0,};

    for (int i = 0; i < answers.size(); i++) {
        for (int j = 0; j < SUPOJANUM; j++) {
            if (answers[i] == supoja[j][i % supoja[j].size()])
                arrCorrect[j]++;
        }
    }

    if (arrCorrect[0] == arrCorrect[1] && arrCorrect[0] == arrCorrect[2]) {
        answer = { 1,2,3 };
    }
    else {
        if (arrCorrect[0] >= arrCorrect[1] && arrCorrect[0] >= arrCorrect[2])
            answer.push_back(1);
        if (arrCorrect[1] >= arrCorrect[2] && arrCorrect[1] >= arrCorrect[0])
            answer.push_back(2);
        if (arrCorrect[2] >= arrCorrect[0] && arrCorrect[2] >= arrCorrect[1])
            answer.push_back(3);
    }
    return answer;
}