#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

char* DeleteTheSame(char* str1, char* str2)
{
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	char* str3 = new char[length1];
	for (int i = 0; i < length2; i++)
	{
		int k = 0;
		for (int j = 0; j < strlen(str1); j++)
		{
			if (str2[i] != str1[j])
			{
				str1[k++] = str1[j];
			}
		}
		str1[strlen(str1)-1]= '\0';
	}
	/*for (int i = 0; i < k; i++)
	{
		str1[i] = str3[i];
	}
	str1[n] = '\0';*/
	return str1;
}
int main()
{
	char string1[] = "They are students";
	char string2[] = "aeiou";
	char *str3=DeleteTheSame(string1, string2);
	cout << str3 << endl;
	system("pause");
	return 0;
}

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//char* removeStr2InStr1(char *str1,char *str2)
//{ 
//	if(str1 == NULL)  
//		return NULL; 
//	if( str1 != NULL && str2 == NULL )  
//		return str1; 
//	char buf[256] = {0}; 
//	char *cur = str2; 
//	while( *cur ) 
//	{  
//		buf[*(cur++)] = 1; 
//	} // 快慢指针：快指针来找是否存在相同的字符，存在则继续向前找 
//	  // 不相同，则将其字符拷贝给慢指针 
//	char *fast = str1; 
//	char *slow = str1; 
//	while( *fast ) 
//	{  
//		if( buf[*fast] != 1 ) // 不存在  
//		{   
//			*slow = *fast;   
//			slow++;   
//			fast++;  
//		}  
//		else
//		{ 
//			// 存在，则就继续向前走   
//			fast++;  
//		} 
//	} 
//	*slow = '\0'; 
//	return str1;
//}
//int main()
//{ 
//	char str1[] = "They are students."; 
//	char str2[] = "aeiou"; 
//	char *str3 = removeStr2InStr1(str1,str2); 
//	cout<<str3<<endl; 
//	system("pause");
//	return 0;
//}