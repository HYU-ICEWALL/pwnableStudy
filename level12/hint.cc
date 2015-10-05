#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char str[256];

	setreuid(3093,3093);
	printf("; --.\n");
	gets(str);
	printf("%s\n",str);
}