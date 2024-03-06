#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    long long tartget = num;
    while(count < 500)
    {
        if ( tartget == 1)
        {
            break;
        }
        else if ( tartget % 2 == 0)
        {
            tartget = tartget / 2;
        }
        else
        {
            tartget = (tartget * 3) + 1;
        }
        count++;
    }
    
    if (count == 500)
    {
        return -1;
    }
    
    return count;
}