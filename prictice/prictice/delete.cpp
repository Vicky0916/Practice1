#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

void Delete(string &s1, const string& s2)
{
	int count[256] = { 0 };
	for (int i = 0; i < s2.size(); i++)
	{
		count[s2[i]]++;
	}
	int begin = 0; int end = 0;
	while (s1[end] != '\0')
	{
		if (count[s1[end]] == 0)
		{
			s1[begin] = s1[end];
			begin++;
		}
		end++;
	}
	s1 = s1.substr(0, begin);
}

int MaxHe(vector<int> array)
{
	int max = -100000;
	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size(); j++)
		{
			int sum = 0;
			for (int k = i; k <= j; k++)
			{
				sum += array[k];
			}
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	return max;
}
int main()
{
	/*string str1;
	string str2;

	getline(cin, str1);
	getline(cin, str2);
	
	Delete(str1, str2);
	cout << str1 << endl;*/
	int N=0;
	int temp=0;
	vector<int> array(N);
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		array.push_back(temp);
	}
	int ret=MaxHe(array);
	cout << ret << endl;
	system("pause");
	return 0;
}