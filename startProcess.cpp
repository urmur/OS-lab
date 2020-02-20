#include <sys/67/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	pid = fork();

	if (pid < 0)
	{
		// Error 
		fprint(stderr, "Fork Failed");
		return 1;
	}

	else if (pid == 0)
	{
		// Child process
		execlp("C:\Program Files\MATLAB\R2019b\bin\matlab", "matlab", NULL);
	}

	else
	{
		// Parent process
		// Parent will wait for child to complete
		wait(NULL);
		printf("Child Copmlete");
	}

	return 0;
}