#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	const char *msg = "hello fwrite\n";
	fwrite(msg, strlen(msg), 1, stdout);

	printf("hello printf\n");
	fprintf(stdout, "hello fprintf\n");
	system("pause");
	return 0;
}