

#include <stdio.h>
#include <unistd.h>

main()
{
	int crap;
	int check;
	char buf[20];
	fgets(buf,45,stdin);
	if(check==0xdeadbeef)
	{
		setreuid(3095,3095);
		system("/bin/sh");
	}
	return 0;
}