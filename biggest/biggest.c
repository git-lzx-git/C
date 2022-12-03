# include <stdio.h>

int main(){
	int a,b,c;
	int max;
	printf("请输入三个整数：%d %d %d\n",a, b, c);
	scanf("%d %d %d",&a, &b, &c);
	printf("你输入的数是：%d %d %d\n", a, b, c);
	if (a > b) {
		if (a > c)
		max = a;	
		else
		max =c;
		}
		else {
		if (b > c)
		max = b;	
		else
		max = c;
		}
	printf("最大的数是：%d\n", max);
	return 0;
}
