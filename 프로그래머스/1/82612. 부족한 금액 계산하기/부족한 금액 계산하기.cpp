using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long cash = money;
    for (int i = 1; i < count+1; i++)
    {
        cash -= i*price;
    }
    
    answer = (cash > 0) ? 0 : -cash ;
    return answer;
}