#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int temp;
    for (int e : arr)
    {
        if ( temp != e)
        {
            answer.push_back(e);
            temp = e;
        }
    }

    return answer;
}