#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    int total = 0;
    int size = arr.size();
        
    for (int e : arr)
    {
        total += e;
    }
        
    return double(total)/arr.size();
}