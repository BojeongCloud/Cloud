#include <stdio.h>

int main()
{
	int opt;
	double num1, num2;
	double result;

	scanf(“%d”, &opt);
	scanf(“%1f %1f”, &num1, &num2);

	if(opt=1)
		result = num1 + num2;
	if(opt=2)
		result = num1 - num2;
	if(opt=3)
		result = num1 * num2;
    if(opt=4)
	    result = num1 / num2;
    printf(“%f \n”, result);
    return 0;
}