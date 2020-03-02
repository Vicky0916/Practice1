// write your code here cpp
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int sushu(int n)
{
	if (n == 1)
		return 0;
	int i = 2;
	//for (int i = 2; i < n; i++)
	while(i<n)
	{
		if (n%i == 0)
		{
			return 0;
			break;
		}
		else
			i++;
	}
	return 1;
}
//void Yinzi(int n)
//{
//	vector<int> array;
//	int shang = n;
//	int yinzi = 0;
//	while (sushu(shang) == 0)
//	{
//		for (int i = 2; i < shang; i++)
//		{
//			if (sushu(i) == 1 && (shang%i == 0))
//			{
//				yinzi = i;
//				shang = shang / i;
//				array.push_back(yinzi);
//				break;
//			}
//		}
//	}
//	//array.push_back(shang);
//	for (int i = 0; i < array.size(); i++)
//	{
//		cout << array[i] << " * ";
//	}
//	cout << shang<<endl;
//}
//
//int main()
//{
//	vector<int> a;
//	int n;
//	while (cin >> n)
//	{
//		cout << n << " = ";
//		 Yinzi(n);
//		/*for (int i = 0; i < a.size(); i++)
//		{
//			cout << a[i] << "*";
//		}
//		cout << endl;*/
//	}
//	/*int n;
//	while (cin >> n)
//	{
//		int ret=sushu(n);
//		cout << ret << " ";
//		
//	}*/
//	system("pause");
//	return 0;
//}

//void getMonthday(int year)
//{
//	int a[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if ((year % 400 == 0) || (year % 4 == 0 && (year % 100) != 0))
//	{
//		a[2] = 29;
//	}
//}
int getDay(int year,int month)
{
	int a[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 400 == 0) || (year % 4 == 0 && (year % 100) != 0))
	{
		a[2] = 29;
	}
	return a[month];
}
int getSum(int year1, int month1, int day1, int year2, int month2, int day2)
{
	int sum = 0;
	if (year1 == year2 && month1 == month2 && day1 == day2)
		return 0;
	if (year2 == year1)
	{
		if (month1 == month2)
		{
			if (sushu(month1) == 1)
			{
				for (int i = day1; i <= day2; i++)
				{

					/*if (sushu(i) == 1)
						sum += 1;
					else
						sum += 2;*/
					sum += 1;
				}
			}
			else
			{
				for (int i = day1; i <= day2; i++)
				{

					/*if (sushu(i) == 1)
						sum += 1;
					else
						sum += 2;*/
					sum += 2;
				}
			}
			
		}
		else  //月数不相等
		{
			while (month1 < month2)
			{
				int ret = getDay(year1, month1);
				if (sushu(month1) == 1)
				{
					for (int i = day1; i < ret; i++)
					{
						/*if (sushu(i) == 1)
							sum += 1;
						else
							sum += 2;*/
						sum += 1;
					}

				}
				else
				{
					for (int i = day1; i < ret; i++)
					{
						/*if (sushu(i) == 1)
							sum += 1;
						else
							sum += 2;*/
						sum += 2;
					}
				}
				month1++;
				day1 = 1;
			}

			if (sushu(month1) == 1)
			{
				for (int i = 1; i <= day2; i++)
				{
						sum += 1;
				}
			}
			else
			{
				for (int i = 1; i <= day2; i++)
				{
					sum += 2;
				}
			}	
		}
	}

	else  //连年都不相等
	{
		//2000 1 2---- 2001 1 2
		while (year1 < year2)
		{
			int ret = getDay(year1, month1);
			if (sushu(month1) == 1)
			{
				for (int i = day1; i <= ret; i++)
				{
					sum += 1;
				}
			}
			else
			{
				for (int i = day1; i <= ret; i++)
				{
					sum += 2;
				}
			}
			month1++;
			day1 = 1;   //2001 1 1
			if (month1 == 13)
			{
				year1 += 1;
				month1 = 1;
			}
		}
		sum+=getSum(year1, month1, day1, year2, month2, day2);
	}
	return sum;
}
int main()
{
	int year1, month1, day1, year2, month2, day2;
	while (1)
	{
		int ret = 0;
		cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2;
		ret=getSum(year1, month1, day1, year2, month2, day2);
		cout << ret<<endl;
	}
	system("pause");
	return 0;
}