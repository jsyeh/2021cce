///week08-1.cpp 是 step01-1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int sum=0, now=1;
	for(int i=1; i<=n; i++){
		//人類1開始的迴圈
		now *= i;
		sum += now;
	}
	printf("%d", sum);
}
