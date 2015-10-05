#include <stdio.h>

void shell(){
	setruid(3097,3097);
	system("/bin/sh");
}
void printit(){
	printf("Hello there!\n");
}

main()
{
	int crap;
	void (*call)()=printit;
	char buf[20];
	fgets(buf,48,stdin);
	call();
}