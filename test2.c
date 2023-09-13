#include <stdatomic.h>

int
main(void)
{
	int key;

	return atomic_flag_test_and_set(&key);
}


void
_exit(void){}

