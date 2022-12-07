# include <stdio.h>
int main() {
	int n;
	int a;
	scanf("%d", &n);
	while (n>0) {
	a = n % 10;
	n /= 10;
	printf("%d", a);	
	}
	printf("\n");

	return 0;
}
