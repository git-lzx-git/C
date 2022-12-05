# include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a;
	int i;
	int first = 1;
	int dgt = 1;
	int pow = 1;
	int sum = 0;
	// scanf("%d", &a);
	/* the numbers of digits; */
	// int dgt = 0;
	// while (a > 0) {
	// a /= 10;
	// cnt ++ ;	
	// }	
	// printf("%d\n", dgt);
	while (dgt < n) {
	first *= 10;
	dgt ++;
	}
	dgt = 1;
	for (i = first; i < first*10; i++) {
	a = i;
	while (a > 0) {
	while (dgt < n+1) {
	pow *= a%10;
	dgt ++;	
	}	
	dgt = 1;
	a /= 10;
	sum += pow;
	pow = 1;
	}
	 if (i == sum) {
	 printf("%d\n",i);	
	 }
	 sum = 0;
	}
	

	return 0;
}
