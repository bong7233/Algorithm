#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int location = 0;
    
    for (int i = 0 ; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
            location = i;
    }
    
    string answer = "김서방은 " + to_string(location) + "에 있다";
    
    return answer;
}