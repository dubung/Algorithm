#include <string>
#include <vector>

using namespace std;
void swapLength(vector<int> size, int* width, int* height);

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width = 0;
    int height = 0;

    for (int i = 0; i < sizes.size(); i++) {
        swapLength(sizes[i], &width, &height);
    }

 
    return width * height;
}

void swapLength(vector<int> size, int* width, int* height) {
    int temp0 = (size[0] > size[1]) ? 0 : 1;
    int temp1 = temp0 ^ 1;

    if (*width < size[temp0])
        *width = size[temp0];
    if (*height < size[temp1])
        *height = size[temp1];
}