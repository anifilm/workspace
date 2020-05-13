#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

/*
   argv[0]: sigaction_send
   argv[1]: pid
   argv[2]: payload
 */
int main(int argc, char **argv)
{
	pid_t pid;
	union sigval value;

	if (argc != 3) {
		printf("usage: %s PID PAYLOAD\n", argv[0]);
		return -1;
	}

	pid = atoi(argv[1]);
	value.sival_int = atoi(argv[2]);

	sigqueue(pid, SIGUSR1, value);
	return 0;
}
