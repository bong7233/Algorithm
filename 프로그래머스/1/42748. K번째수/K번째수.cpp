#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto command : commands)
    {
        int i(command[0]);
        int j(command[1]);
        int k(command[2]);
        
        vector<int> sorted_v = array;
        sort(sorted_v.begin()+i-1, sorted_v.begin()+j);

        answer.push_back(sorted_v[i+k-2]);
    }
    return answer;
}