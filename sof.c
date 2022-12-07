# include <stdio.h>
int main () {
	int i = 1;
	int n;
	double frac;
	double sum = 0;
	scanf("%d", &n);	
	if (n>0) {
	printf("f(%d) =", n);
	do {
	frac = 1.0 / i;		
	if (i==n) {
	printf(" 1/%d", i);
	} else {
	printf(" 1/%d +", i);
	}
	sum += frac;
	i ++;
	} while (i<n+1);
	printf(" = %f\n", sum);
	} else {
	printf("not invalid\n");
	}

	return 0;
}
