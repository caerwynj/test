#include <stdio.h>

void
main(void)
{
	printf("char %ld\n", sizeof(char));
	printf("short %ld\n", sizeof(short));
	printf("int %ld\n", sizeof(int));
	printf("long %ld\n", sizeof(long));
	printf("long long %ld\n", sizeof(long long));
	printf("void* %ld\n", sizeof(void*));

}

