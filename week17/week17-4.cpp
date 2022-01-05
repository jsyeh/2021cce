///Week16-4.cpp 瘋狂程設-CPE顆星廣場-一顆星
#include <stdio.h>
int f(int N)
{//Step04 寫出一個函式
	int sum=0;//Step02加起來
	while( N > 0 ){//Step02 迴圈,剝到光光
		sum += N%10;//Step01 N%10餘數 Step03加
		N = N / 10;//Step01 N/10除法 Step02變小
	}
	return sum;//Step03
}
int main()
{
	int N;
	while( scanf("%d",&N)==1 ){//Step06讀資料
		if(N==0)break;//Step06: while配break
		int ans = f(f(f(N)));//Step05多叫幾次
		printf("%d\n", ans );
	}
}
