#include <stdio.h>
#include <math.h>
double f(double x)
{
	return x * x;
}

int main()
{
	double x, a, b;
	scanf("%lf", &x);
	a = 0;
	b = x;
	while (fabs(f(a) - x) >1e-2)
	{
		double m =(a + b)/2;
		if ((f(m) - x) * (f(a) - x) > 0)
		{
			a = m;
		}
		else
		{
			b = m;
		}
	}
	printf("%lf\n", a);
	return 0;
}
