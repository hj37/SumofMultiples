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
   �ڿ��� N�� �ԷµǸ� 1���� N������ �� ��
   M�� ������� ����ϴ� ���α׷��� �ۼ��ϼ���.
    */
    int N; int M;
    /* �ڿ��� N, M�� �־��� ��� ����
    sum�� ����� �� */

    cin >> N >> M;
    int sum = solution(N,M);
    cout << sum;


    return 0;
}
