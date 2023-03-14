#include<stdio.h>
#include<stdlib.h>

double factorial_iter(double n)
{
	double i, result = 1;
	for (i = 1; i <= n; i++)
		result = result * i;
	return(result);
}


double factorial_rec(double n)
{
	double i, result = n;
	for (i = n - 1; i >= 1; i--)
		result = result * i;
	return(result);
}

int main(void)
{
	double n;
	/*printf("fact 를 구할 수를 입력하시오:");
	scanf("%lf", &n);*/

	double result_iter = factorial_iter(5);
	double result_rec = factorial_rec(5);

	printf("result_iter:%lf\n", result_iter);
	printf("result_rec:%lf\n", result_rec);




}