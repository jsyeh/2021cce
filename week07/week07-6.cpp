#include <stdio.h>
int main()
{
	int n;//有n個人
	scanf("%d", &n);

	float sum=0;//重要:加總

	for(int i=1; i<=n; i++){
		int now;//現在這個成績
		scanf("%d", &now);
		sum = sum + now;//重要
	}

	printf("%.2f", sum/n );
}
