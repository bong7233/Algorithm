#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int total = 0;
    int target = x;
    while(target)
    {
        total += target % 10;
        target = target / 10;
    }
    
    // printf("%i", total);
    answer = (x%total == 0) ? true : false;
    
    return answer;
}