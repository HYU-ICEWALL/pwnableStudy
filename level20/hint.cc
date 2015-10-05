#include <stdio.h>
main(int argc, char ** argv)
{
	char bleh[80];
	setreuid(3101,3101);
	fgets(bleh,79,stdin);
	printf(belh);
	return 0;
}