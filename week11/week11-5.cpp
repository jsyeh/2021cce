//Week11-5.cpp 百數排序-泡泡排序法
#include <stdio.h>
int a[100];//(0) 用陣列,來存100個數字
int main()
{//(1) Input
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	//接下來,我們要用泡泡排序法
	for(int k=0; k<100-1; k++){//(6) 要做幾次? 100-1次
		for(int i=0; i<100-1; i++){//(5) 要從左到右 巡一輪
			if(a[i] > a[i+1]){//(3) a[i] a[i+1] 相鄰2個比較
				int temp = a[i];//(4)不對的時候,才交換
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for(int i=0; i<100; i++){//(2) Output
		printf("%d\n", a[i] );
	}
}
