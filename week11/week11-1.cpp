///Week11-1.cpp step01-1 р借计
///(1) 耞 n 借计  for(int i=2; i<n; i++){
///       if(n%i==0) bad=1; 程Τ⊿Τ胊奔
///(2) р M 借计
///   for(int n=2; n<=M; n++){
///       ノ (1) 借计耞
///(3) е硉借计縵猭 a[i] ㄓ耞
///(4) ex. Τ碭, ex. 
///(5) 玡N借计.....
#include <stdio.h>
int a[10000000]={0,0,0,0};
int main()
{
	int m=10000000;
	//scanf("%d", &m);
	printf("稱笵玡5000借计!!!!\n");
	int ans=0;
	for(int i=2; i<m; i++){
		if(a[i]==0){///т借计i
            printf("%d ", i );///рiㄓ
			ans++;///,秨み!!!
			if(ans==5000) break;
			for(int k=i+i; k<m; k+=i){
				a[k]=1;
			}
		}
	}
	printf("羆: %d\n", ans);
}
