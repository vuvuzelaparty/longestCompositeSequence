#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num);

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Please enter a single number higher than 3\n");
		exit(0);
	}
	int count = 0, max = 0, maxVal = 4, limit = atoi(*(++argv));
	if (limit < maxVal) {
		printf("Please enter a single number higher than 3\n");
		exit(0);
	}
	for (int i = maxVal; i <= limit; i++) {
		if (isPrime(i))
			count = 0;
		else {
			count++;
			if (max < count) {
				max = count;
				maxVal = i-max+1;
			}
		}
	}
	printf("%d \n", max);
	while (max--)
		printf("%d ", maxVal++);
	printf("\n");
	return 0;
}

int isPrime(int num) {
	int ret = 0;
	for (int i = 2; i <= sqrt(num); i++) // sqrt to reduce time, smallest factor has to be less than this
		if (num % i == 0) {
			ret++;
			break;
		}
	return !ret;
}
