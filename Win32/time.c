#include <time.h>

clock_t tnow;

/* return current elapsed cpu time (unit of second) */
double dtime(void)
{
	double q;

	tnow = clock();
	q = (double)tnow / (double)CLOCKS_PER_SEC;

	return q;
}
