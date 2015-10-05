#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char str[256];

	setreuid( 3092, 3092);
	strcpy(str,argv[1]);
	printf(str);
	return 0;
}