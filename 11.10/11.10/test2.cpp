#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str, int left, int right)
{
	int len = strlen(str);
	while (left<right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char str[]= "I like Beijing";
	reverse(str,0, strlen(str)-1);
	int j = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			reverse(str, j, i - 1);
			j = i+1;
		}
	}
	for (int i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	system("pause");
	return 0;
}
//#include <iostream>
//#include <string>
//using namespace std;  
//void reverseStr(string &s,int begin,int end)
//{        
//	while (begin < end) 
//	{        
//		char temp = s[begin];        
//		s[begin] = s[end];        
//		s[end] = temp;        
//		begin++;        
//		end--;    
//	}
//}  
//int main()
//{     
//	string s;        
//	while (getline(cin,s)) 
//	{                
//		int length = (int)s.length();        
//		reverseStr(s,0,length-1); //先将句子按字符反转            
//		int j = 0;        
//		for (int i=0; i<length; i++) 
//		{            
//			if (s[i]==' ') 
//			{                
//				reverseStr(s,j,i-1); //再将句子的单词按字符反转                
//				j=i+1;         
//			}   
//		}       
//		cout<<s<<endl;   
//	}       
//	return 0;
//}
