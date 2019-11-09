#include <iostream>
#include <stdlib.h>
//#include <vector>

using namespace std;

void LongNumber(const string&str)
{
	if (str.empty())
	{
		cout << "error";
	}

	int max = 0;
	int count=0;
	int pos = 0;
	int i = 0;
	while(  i < str.size())
	{
		while (!isdigit(str[i]))
			i++;
		while (isdigit(str[i]))
		{
			count++;
			i++;
		}
		if (count > max)
		{
			max = count;
			pos = i - max;
			
		}
		count = 0;
	}
	for (int j = pos; j < pos + max; j++)
	{
		cout << str[j];
	}
	cout << endl;
}

int main()
{
	string str = "abcd12345ed125ss123456789";
	LongNumber(str);
	system("pause");
	return 0;
}

