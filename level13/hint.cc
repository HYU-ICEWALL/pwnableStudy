#include <stdlib.h>

main(int argc, char * argvp[])
{
	long i = 0x1234567;
	char buf[1024];

	setreuid(3094,3094);
	if(argc > 1)
		strcpy(buf,argv[1]);

	if(i!=0x1234567){
		printf(" Warnning: Buffer Overflow!!!\n");
		kill(0,11);
	}
}