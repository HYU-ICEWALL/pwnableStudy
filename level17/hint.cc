#include <stdio.h>

void printit(){
	printf("Hello there!\n");
}

main()
{
	int crap;
	void (*call)()=printit;
	char buf[20];
	fgets(buf,48,stdin);
	setreuid(3098,3098);
	call();
	return 0;
}