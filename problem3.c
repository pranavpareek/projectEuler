//600851475143

#include <stdio.h>

long long int isPrime(int num)
{
	long long int i = 0, divCounter = 0;
	for(i=2; i<num; i++)
	{
		if(!(num%i))
		{
			divCounter++;
		}
	}

	if(divCounter == 0)
		return 1;
	else
		return 0;
}

long long int largestPrimeFactor(long long int number)
{
	long long int num;
	while(number < 600851475143)
	{
		//printf("Checking %lld\n", number);
		if(600851475143%number==0)
		{
			printf("Division success: %lld\n", number);
			if(isPrime(number))
			{
				printf("Found: %lld\n", number);
			}
		}
		number++;
	}
	return number;
}

int main(void)
{
	long long int num = 2, i = 0, temp = 0;
	long long int test = 600851475143;

	for(i=0; i<test; i++)
	{
		if(i>300425737571) {
			printf("%lld\n", i);
		}
	}
	//printf("Enter number: ");
	//scanf("%lld", &num);
	//printf("largest prime factor %lld\n", largestPrimeFactor(num));
}
