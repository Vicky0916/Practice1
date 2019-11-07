#include<iostream> 
#include<vector> 
using namespace std;

int ArrangeNumb(vector<int> &arr, int N)
{

	int numb = 0;

	int cont, cont1, cont2;

	cont = cont1 = cont2 = 1;

	for (int i = 0; i < N; i += cont)

	{

		for (int j = 0; j < N - 1 - i; j++)//���� 

		{

			if (arr[i + j + 1] < arr[i + j])

				break;

			cont1++;

		}

		for (int j = 0; i + j < N - 1; j++)//���� 

		{

			if (arr[i + j + 1] > arr[i + j])

				break;

			cont2++;

		}

		(cont1 > cont2) ? (cont = cont1) : (cont =
			cont2);//ȡ���� 

		cont1 = cont2 = 1;

		numb++;

	}
	return numb;
}

int main()
{

	int n;

	cin >> n;

	vector<int> str;//vector�ڶ��Ͽ����ڴ棬������ͨ������ջ����� 

	for (int i = 0, tep; i < n; i++)

	{
		cin >> tep;
		str.push_back(tep);
	}

	cout << ArrangeNumb(str, n) << endl;

	return 0;
}