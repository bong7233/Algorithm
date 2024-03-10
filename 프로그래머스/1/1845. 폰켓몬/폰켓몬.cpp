#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    
    unordered_map<int,int> count;
    
    for (auto &n : nums)
    {
        count[n] += 1;
    }
        
    return min(count.size(), nums.size() / 2);
}