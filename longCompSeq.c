#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num);

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("Please enter a single number higher than 3\n");
		return 1;
	}
	int count = 0, maxLength = 0, maxVal = 4, limit = atoi(*(++argv));
	if (limit < maxVal) {
		printf("Please enter a single number higher than 3\n");
		return 1;
	}
	for (int i = maxVal; i <= limit; i++) {
		if (isPrime(i))
			count = 0;
		else {
			count++;
			if (maxLength < count) {
				maxLength = count;
				maxVal = i-maxLength+1;
			}
		}
	}
	printf("%d \n", maxLength);
	while (maxLength--)
		printf("%d ", maxVal++);
	printf("\n");
	return 0;
}

int isPrime(int num) {
	int limit = sqrt(num);
	for (int i = 2; i <= limit; i++) // sqrt to reduce time, smallest factor has to be less than this
		if (num % i == 0)
			return 0;
	return 1;
}
