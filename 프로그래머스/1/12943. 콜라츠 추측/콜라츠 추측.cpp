#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    while(count < 450)
    {
        if ( num == 1)
        {
            break;
        }
        else if ( num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num * 3 + 1;
        }
        count++;
    }
    
    if (count == 450)
    {
        return -1;
    }
    
    return count;
}