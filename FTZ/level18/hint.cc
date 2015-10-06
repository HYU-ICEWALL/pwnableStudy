#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
void shellout(void);
int main()
{
	char string[100];
	int check;
	int x=0;
	int count=0;
	fd_set fds;
	printf("Enter your command: ");
	fflush(stdout);
	while(1)
	{
		if(count >= 100)
			printf("what are you tring to do?\n");
		if(check==0xdeadbeef)
			shellout();
		else
		{
			FD_ZERO(&fds);
			FD_SET(STDIN_FILENO&fds);

			if(select(FD_SETSIZE, &fds, NULL, NULL, NULL) >= 1)
			{
				if(FD_ISSET(fileno(stdin),&dfs))
				{
					read(fileno(stdin),&x,1);
					switch(x)
					{
						case '\r':
						case '\n':
							printf("\a");
							break;
						case 0x08:
							count--;
							printf("\b \b");
							break;
						default:
							string[count] = x;
							count++;
							break;
					}
				}
			}
		}
	}
}
void shellout(void)
{
	setreuid(3099,3099);
	execl("/bin/sh","sh",NULL);
}