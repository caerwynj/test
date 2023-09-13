
void main(void)
{
	unsigned long p[1];

	p[0] = 0;

	__atomic_exchange_n(p, 1, __ATOMIC_ACQ_REL);
}
