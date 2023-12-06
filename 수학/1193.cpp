#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X;
    cin >> X;

    int numerator = 1, denominator = 1, add = 1, count = 1;

    while (1) //라인 찾기
	{		
		if ((count-1)*(count)/2 < X && X <= (count)*(count+1)/2)
		{
			break;
		}
		count++;
	}

	if (count % 2 != 0) // 홀수일 때
	{
		int a = count*(count + 1) / 2;
		printf("%d", a - X + 1);
		printf("/");
		printf("%d", count -(a - X));
	}
	else //짝수 일 때
	{
		int a = count * (count + 1) / 2;
		printf("%d",count - (a - X));
		printf("/");
		printf("%d",a - X + 1);
	}
}
