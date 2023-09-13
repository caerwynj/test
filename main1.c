#include <stdatomic.h>

void main(void)
{
	unsigned long p[1];

	p[0] = 0;

	atomic_flag_test_and_set(p);

}


int
_exit(int n)
{
	n++;
	return 0;
}
