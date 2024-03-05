#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

long long solution(int a, int b) {
    long long start = a;
    long long end = b;
    long long total = 0;
    
    if ( a == b)
        return a;
    
    if (a > b)
    {
        start = b;
        end = a;
    }
    
    for (long long i = start; i <= end; i++)
    {
        total += i;
    }
    
    return total;
}