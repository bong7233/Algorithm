#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    printf("%i", s.size());
    for (char& c : s)
    {
        if (!(isdigit(c) && (s.size() == 4 || s.size() == 6)))
            answer = false;
    }
    return answer;
}