#include <iostream>
#include <stdlib.h>
using namespace std;
int flag = 0;
int JumpStep(int N, int M)
{
	while (N < M)
	{
		    int middle = N / 2;
			for (int i = middle; i >= 2; i--)
			{
				if (N + i < M && (N+i)%2 == 0)
				{
					N += i;
					flag++;
					break;
				}
			}
	}
	return flag;
}

int main()
{
	int N, M,ret; 
	cin >> N ;
	cin >> M;
	ret = JumpStep(N, M);
	cout << ret << endl;
	system("pause");
	return 0;
}