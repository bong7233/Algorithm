#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < arr1.size(); i++)
    {
        int sum = arr1[i] | arr2[i];
        
        string one_line = "";
        while(sum > 0)
        {
            if (sum%2 == 0)
                one_line += " ";
            else
                one_line += "#";
            
            sum /= 2;
        }
        
        while(one_line.size() != n)
            one_line += " ";
        
        reverse(one_line.begin(), one_line.end());
        answer.push_back(one_line);

    }
    return answer;
}