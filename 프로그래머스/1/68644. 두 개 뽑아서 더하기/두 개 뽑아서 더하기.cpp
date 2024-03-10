#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    while (numbers.size() > 0)
    {
        int pop = numbers[numbers.size()-1];
        numbers.pop_back();
        for (auto& i : numbers)
        {
            answer.push_back(pop+i);
        }
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(),answer.end()), answer.end());
    return answer;
}