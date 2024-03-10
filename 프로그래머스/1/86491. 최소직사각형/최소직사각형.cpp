#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int x(0);
    int y(0);
    for (auto& v : sizes)
    {
        int v_x = *min_element(v.begin(), v.end());
        int v_y = *max_element(v.begin(), v.end());

        if (v_x > x)
            x = v_x;
        if (v_y > y)
            y = v_y;
        // printf("after x = %i, y = %i\n",x,y );
    }
    return x*y;
}