#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s = to_string(n);

    for(int i = s.length()-1; i >= 0; i--)
    {
        int item = (s[i]) - '0';
        answer.push_back(item);
    }
    return answer;
}