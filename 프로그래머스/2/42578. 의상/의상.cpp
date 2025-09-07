#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    vector<string> key;
 int answer = 1;

 map<string, int> clothesMap;

 for (int i = 0; i < clothes.size(); i++) {
     clothesMap[clothes[i][1]]++;
 }

 for (auto it : clothesMap) {
     key.push_back(it.first);
 }

 for (string& val : key) {
     answer *= (clothesMap[val] + 1);
 }

 answer--;

 return answer;
}