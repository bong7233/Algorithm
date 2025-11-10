using System;

public class Solution {
    public int solution(int num1, int num2) {
        float answerF = (float)num1 / (float)num2 * 1000 ;
        int answer = (int)answerF;
        return answer;
    }
}