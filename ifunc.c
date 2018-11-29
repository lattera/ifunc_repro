#include <sys/param.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <x86/ifunc.h>

#define	FUNC	 1

static int func = FUNC;

static int
func1(int val)
{

	printf("func1 val: %d\n", val);
	return (0);
}

static int
func2(int val)
{

	printf("func2 val: %d\n", val);
	return (0);
}

DEFINE_IFUNC(, int, call_func, (int), static)
{

	if (func == 1)
		return (func1);

	return (func2);
}

int
main(int argc, char *argv[])
{

	if (argc != 2)
		exit(1);

	call_func(FUNC);

	return (0);
}
