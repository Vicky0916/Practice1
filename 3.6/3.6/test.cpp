#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	float n;
	int sum;
	while (cin >> sum)
	{
		
			n = (100*(sum-1)) / sum;
			printf("%.2f", n);
			cout << "%" << endl;
		
		
	}
	
	system("pause");
	return 0;
}