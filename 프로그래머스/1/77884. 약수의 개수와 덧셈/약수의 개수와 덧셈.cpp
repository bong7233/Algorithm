#include <string>
#include <vector>
#include <typeinfo>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i < right+1; i++)
    {
        cout << sqrt(i) << endl;
        if(sqrt(i) == int(sqrt(i)))
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }
    return answer;
}