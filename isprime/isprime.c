# include <stdio.h>

int main() {
	int x, i, m;
	int isprime = 1; //x is prime.

	printf("Please input an integer:%d", x);
	scanf("%d", &x);
	printf("The number is: %d\n", x);
	for ( i=2; i<x; i++){
		m = x % i;
		if (m = 0) {
		isprime = 0;	
		} 
	}
	if (isprime == 0) {
	printf("%d is not prime\n", x);	
	} else {
	printf("%d is prime\n", x);	
	}	
	return 0;
}
