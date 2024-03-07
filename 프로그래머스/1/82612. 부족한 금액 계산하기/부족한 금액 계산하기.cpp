using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;

    //가우스 덧셈공식
    long long cash = (long long)money - (long long)count*(count+1)/2*price;
    
    answer = (cash > 0) ? 0 : -cash ;
    return answer;
}