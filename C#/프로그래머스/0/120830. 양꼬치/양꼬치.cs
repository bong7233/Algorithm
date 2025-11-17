using System;

public class Solution {
    public int solution(int n, int k) {
        int free_drink = (n / 10);
        
        if (k > 0)
        {
            k -= free_drink;    
        }
        int answer = 12000*n + 2000*k;
        return answer;
    }
}