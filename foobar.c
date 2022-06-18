#include <errno.h>
#include <error.h>
#include <stdio.h>
#include <stdlib.h>

#include <sys/utsname.h>

int main(int argc, char *argv[]) {
	struct utsname system;

	if (uname(&system) == -1)
		error(EXIT_FAILURE, errno, "Failed to get system identification information");

	printf("Sysname:  %s\n", system.sysname);
	printf("Nodename: %s\n", system.nodename);

	return EXIT_SUCCESS;
}
