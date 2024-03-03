#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s)
{
    int p_sum = 0;
    int y_sum = 0;
    
    for (char c : s)
    {
        // cout << c << endl;
        if ( toupper(c) == 'P')
        {
            p_sum++;
        }
        else if ( toupper(c) == 'Y')
        {
            y_sum++;
        }
    }
    
    // cout << p_sum << " " << y_sum << endl;    
    bool answer = (p_sum != y_sum) ? false : true;
    
    return answer;
}