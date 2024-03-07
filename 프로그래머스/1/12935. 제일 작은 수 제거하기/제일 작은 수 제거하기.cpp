#include <string>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min_value =  INT_MAX;
    int min_index;
    for (int i =0; i < arr.size(); i++)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
            min_index = i;
        }
    }
    
    arr.erase(arr.begin()+min_index);
    if (arr.empty())
        arr.push_back(-1);
    
    return arr;
}