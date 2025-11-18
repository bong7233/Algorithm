using System;

public class Solution {
    public double solution(int[] numbers) {
        double answer = 0;
        double num_total = 0;
        
        foreach (int i in numbers)
        {
            num_total += i;
        }
        answer = num_total/numbers.Length;
        return answer;
    }
}