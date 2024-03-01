#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    int start = x;
    for (int i = 1; i < n+1; i++)
    {
        answer.push_back(start);
        start += x;
    }
    
    return answer;
}