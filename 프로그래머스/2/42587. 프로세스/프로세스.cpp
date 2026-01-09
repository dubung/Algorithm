#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int temp = priorities[location];
    priorities[location] = 10; // 해당하는 프로세스를 표시하려고 10으로 

    int answer = 0; 
    int cnt[10] = { 0, }; // 우선순위 별로 몇개씩 남았나 저장해둘 배열
    int icnt = 9; // 우선순위가 높은것부터 실행해야하니깐
    queue<int> process;
    for (int& val : priorities) {
        cnt[val]++;
        process.push(val);
    }
    cnt[temp]++;// 10으로 바꾸기 전에 값을 추가

    while (1) {

        if (cnt[icnt]) {
            int frontVal = process.front();

            process.pop();// 우선 빼 뒤에 넣어야하는지 아닌지는 밑에서 판단
            if ((icnt) == temp && frontVal == 10) { // 원하던 값이면 리턴
                return ++answer;
            }
            if ((icnt) != frontVal) {// 우선순위가 높은게 아니였으면 다시 넣어줌
                process.push(frontVal);
            }
            else {// 우선순위가 높은 것이었다면 배열에서 -1 및 answer++
                cnt[icnt]--;
                answer++;
            }

        }
        else {// 우선순위에 해당하는 것이없다면 ex ) 9가 없다면 icnt--를해서 이전 인덱스로 접근
            icnt--;
        }
    }

}