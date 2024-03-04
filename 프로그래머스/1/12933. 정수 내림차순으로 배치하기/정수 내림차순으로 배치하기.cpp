#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string nstr = to_string(n);
    sort(nstr.rbegin(), nstr.rend());
    cout << nstr << endl;
    
    return stoll(nstr);
}