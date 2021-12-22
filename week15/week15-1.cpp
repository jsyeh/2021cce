///Week15-1.cpp step02-1 最大公因數
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);///2整數
    if(a<0) a=-a; ///整數有負的,就算正的就好了
    if(b<0) b=-b;

	int ans=1;
	for(int i=1; i<=a; i++){ ///這個迴圈,要跑很多次
		if( a%i==0 && b%i==0 ) ans=i;
	}   ///都可以整除,可以約分,good!!!答案
	printf("%d", ans );
	return 0;
}
