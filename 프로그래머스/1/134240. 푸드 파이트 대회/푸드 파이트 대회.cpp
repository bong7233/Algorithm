#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for (int i = 1; i < food.size(); i++)
    {
        int repeat = food[i]/2;
        while(repeat--)
        {
            answer += to_string(i);
        }
    }
    string copyAnswer = answer;
    
    
    string answer2 = answer;
    reverse(answer2.begin(), answer2.end());
    answer += "0" + answer2;

    return answer;
}