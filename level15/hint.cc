#include <stdio.h>

main()
{
	int crap;
	int *check;
	char buf[20];
	fgets(buf,45,stdin);
	if(*check==0xdeadbeef)
	{
		setreuid(3096,3096);
		system("/bin/sh");
	}
	return 0;
}