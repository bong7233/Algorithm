#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int tempIndex = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            tempIndex = 0;
            continue;
        }    
            
        if (tempIndex & 1)
        {
            s[i] = tolower(s[i]); 
        }
        else
        {
            s[i] = toupper(s[i]);
        }
        
        tempIndex++;
    }
    
    answer = s;
    
    return answer;
}