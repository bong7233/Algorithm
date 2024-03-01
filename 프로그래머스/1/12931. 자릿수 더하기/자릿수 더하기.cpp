#include <iostream>

using namespace std;
int solution(int n)
{
    int total = 0;
    int quotient = n;
    
    while(quotient != 0)
    {
        total += (quotient % 10);
        quotient = (quotient / 10);
        
    }
    return total;
}