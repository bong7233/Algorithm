#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 1; i < n+1; i++)
    {
        if(i&1)
        {
            answer.append("수");
        }
        else
        {
            answer.append("박");
        }
    }
    return answer;
}