#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    sort(mats.rbegin(), mats.rend());	
    int row = park[0].size();
    int col = park.size();
    bool result = false;
    
    for(int size = 0; size < mats.size(); size++){
       
        for(int i = 0; i <= row - mats[size]; i++){
            for(int j = 0; j <= col - mats[size];j++){
        
                result = true;
                for(int matx = 0; matx < mats[size]; matx++){
                    for(int maty = 0; maty < mats[size]; maty++){
                        if(park[j + maty][i + matx] != "-1"){
                            result = false;
                        }
                    }
                }
                if(result){
                    return mats[size]; 
                } 
            }
        }

    }
    
    return answer;
}