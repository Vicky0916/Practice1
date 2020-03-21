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