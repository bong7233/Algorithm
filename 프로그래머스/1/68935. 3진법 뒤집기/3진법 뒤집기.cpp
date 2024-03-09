#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    vector<int> result;
    while(n>0)
    {
        result.push_back(n%3);
        n = n/3;
    }
    
    int answer = 0;
    for(int i = 0; i < result.size(); i++)
    {
        answer += pow(3, result.size()-1-i) * result[i];
        cout << answer << endl;
    }
    return answer;
}