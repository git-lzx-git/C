# include<stdio.h>

int main() {
	int a;
	int i, j, k;
	int cnt = 0;

	scanf("%d", &a);
	i = a;
	while (i < a+3) {
	j = a;
	while (j < a+3) {
	k = a;
	while (k < a+3) {
	if (j!=i) {
	if (k!=j) {
	cnt ++;
	if (cnt % 4 == 0){
	printf("%d%d%d\n", i, j, k);
	} else {
	printf("%d%d%d ", i, j, k);
	}
	}
	}
	k ++;	
	}
	j ++;	
	}
	i ++;	
	}
	printf("%d\n", cnt);	

	return 0;
}
