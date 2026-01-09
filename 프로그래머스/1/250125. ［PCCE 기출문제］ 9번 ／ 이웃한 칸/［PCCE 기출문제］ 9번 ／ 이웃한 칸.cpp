#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    
    int max = board[0].size();
    printf("%d", max);
    int answer = 0;
    if(h != 0 && board[h-1][w] == board[h][w])
        answer++;
    if(w != 0 && board[h][w-1] == board[h][w])
        answer++;
    if(h < max - 1 && board[h+1][w] == board[h][w])
        answer++;
    if(w < max - 1 && board[h][w+1] == board[h][w])
        answer++;
    
    
    
    return answer;
}