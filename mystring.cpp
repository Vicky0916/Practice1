#include <iostream>
#include <stdlib.h>
#include <string>
#include <assert.h>
using namespace std;
char* my_strcpy(char* dst, const char* src)  //×Ö·û´®¿½±´
{
	// hello    worldll
	assert(dst&&src);
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst='\0';
	return dst;
}
int my_strlen(const char*str)   //Çó×Ö·û´®³¤¶È
{
	assert(str);
	int sum = 0;
	while (*str++ != '\0')
	{
		sum++;
	}
	return sum;
}

char* my_strcat(char* dst, const char* src) //×Ö·û´®Á¬½Ó
{
	// hello    worldll
	assert(dst&&src);
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return dst;
}

int my_strcmp(const char* dst, const char* src)   //×Ö·û´®±È½Ï
{
	int len = 0;
	assert(dst&&src);
	while (*dst&&*src && (*dst == *src))
	{
		++dst;
		++src;
	}
	return *dst- *src;
}

char* strstr(const char*dst, const char* src)  //×Ö·û´®²éÕÒ
{
	assert(dst&&src);
	while (*dst)
	{
		while ((*dst != *src) && *dst!='\0')
		{
			++dst;
		}
		while (*dst == *src)
		{
			const char *dest = dst;
			const char *srcs = src;
			while (*dest == *srcs)
			{
				++dest;
				++srcs;
			}
			if (*srcs == '\0')
			{
				return (char*)dst;
			}
			else
			{
				dst++;;
			}
		}
	}
}