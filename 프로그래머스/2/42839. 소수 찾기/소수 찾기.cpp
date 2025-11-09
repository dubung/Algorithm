#include <string>
#include <vector>

using namespace std;
#define UINTSIZE sizeof(unsigned char) * 8
#define MAXSIZE (int)((9999999 / UINTSIZE)+0.5)

bool isPrime(int n);
int s2i(string numbers, vector<int>order);
bool isDuplicate(vector<int> order, int num);
void combination(string numbers, vector<int>order, int index, int* cntPrimaryNum);
unsigned long arrCheck[MAXSIZE + 1];


int solution(string numbers) {
    int answer = 0;
    int cntPrimaryNum = 0;
    vector<int> order;

    combination(numbers, order, numbers.size(),&cntPrimaryNum);

    return cntPrimaryNum;
}


void combination(string numbers, vector<int>order, int index, int* cntPrimaryNum)
{
    if (index < 0)
        return;

    for (int i = 0; i < numbers.size(); i++) {
        vector<int>tempOrder = order;
        if (isDuplicate(order, i))
            continue;
        else {

            tempOrder.push_back(i);
            combination(numbers, tempOrder, index - 1, cntPrimaryNum);

            int num = s2i(numbers, tempOrder);
            if (isPrime(num) && !(arrCheck[num / UINTSIZE] & 1 << UINTSIZE - (num % UINTSIZE)))
            {
                arrCheck[num / UINTSIZE] |= 1 << UINTSIZE - (num % UINTSIZE);
                *cntPrimaryNum = *cntPrimaryNum + 1;
            }

        }

    }


}

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)	return false;

    return true;
}


bool isDuplicate(vector<int> order, int num)
{

    for (int i = 0; i < order.size(); i++) {
        if (order[i] == num)
            return true;
    }

    return false;
}


int s2i(string numbers, vector<int> order) {
    int res = 0;

    for (int i = 0; i < order.size(); i++) {

        res = res * 10 + (numbers[order[i]] - '0');

    }

    return res;
}