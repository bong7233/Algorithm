#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    vector<string> alpha = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = 0 ; i < 10; i++)
    {
        s = regex_replace(s, regex(alpha[i]), to_string(i));
    }
    
    return stoi(s);
}