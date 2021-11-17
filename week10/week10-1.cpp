///Week10-1 step01-1 计借计Τ碭
#include <stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	int ans=0;///ansΤ碭借计
	for(int n=2; n<=m; n++){
		//俱计n,璶代ウ琌ぃ琌借计
		int bad=0;
		for(int i=2; i<n; i++){//ゑn计
			if(n%i==0){
                bad=1; ///璶代埃猭俱埃
                break;///琂礛胊奔,碞ぃ璶篊篊代,铬秨
			}
		}
		if(bad==0){///т1借计
            ans++;///借计舘!!!!
            ///printf("%d ", n);///ㄓ, 篊
		}
	}
	printf("\n Ans: %d \n", ans);
}
