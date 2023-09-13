#include <stdio.h>
#include "lib9.h"
#include "pool.h"

int
main()
{
	int n = ((int)(((Bhdr*)0)->u.data));
	printf("offset size %d\n", n);
	printf("sizeof Btail %d\n", sizeof(Btail));
	printf("sizeof Bhdr %d\n", sizeof(Bhdr));
	printf("0->u.data %d\n", ((int)(((Bhdr*)0)->u.data)));
}
