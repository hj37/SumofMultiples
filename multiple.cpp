#include <iostream>

using namespace std;

int solution(int n,int m)
{
    int Sum = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i%m == 0)
        {
            Sum += i;
        }
    }

    return Sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   /*
   자연수 N이 입력되면 1부터 N까지의 수 중
   M의 배수합을 출력하는 프로그램을 작성하세요.
    */
    int N; int M;
    /* 자연수 N, M은 주어진 배수 조건
    sum은 배수의 합 */

    cin >> N >> M;
    int sum = solution(N,M);
    cout << sum;


    return 0;
}
