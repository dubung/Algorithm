#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int cnt = brown + yellow;
    
    for (int i = cnt - 1; i > 2; i--) {
        if (!(cnt % i) && (cnt / i) > 2)
        {
            if ( (i -2) * ((cnt/i)-2) == yellow) {
                answer = { i,cnt / i };
                break;
            }
        }
    }
    return answer;
}