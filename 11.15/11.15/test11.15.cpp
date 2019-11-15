#include <iostream>
#include <stdlib.h>
using namespace std;
int add(int A, int B)
{
	int c = A ^ B;
	return c;
}
class UnusualAdd {
public:
	int addAB(int A, int B)
	{
		if (B == 0)
			return A;
		unsigned int sum = A ^ B;
		unsigned int carry = (A&B) << 1;
		return addAB(sum, carry);
	}
};
int main()
{
	int ret1 = add(1, 2);
	int ret2 = add(3, 5);
	int ret3 = add(2, 4);
	cout << "ret1:"<<ret1 << endl;
	cout << "ret2:"<<ret2 << endl;
	cout << "ret3:" << ret3 << endl;
	system("pause");
	return 0;
}