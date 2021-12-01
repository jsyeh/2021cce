///Week12-4.cpp step03-1 為了熟悉Selection Sort, 下週要考它。
///所以我們利用瘋狂程設-第13週的考題
///利用練習模式做一次。
///百數,所以要用陣列宣告。
///前面先Input讀入100個數,最後面Output印出100個數。
///中間的核心Selection Sort的口訣是 左手i,右手j
///希望小到大,所以反過來,就要交換。
///比較容易出錯的是j=i+1的地方
#include <stdio.h>
int a[100];//在外面,比較大,且會幫忙清為0
int main()
{// (1) Input
	for(int i=0; i<100; i++){
		scanf( "%d", &a[i] );
	}
	//Selection Sort原則
	for(int i=0; i<100; i++){//左手i 小的留在舞台
		for(int j=i+1; j<100; j++){//右手j
			if( a[i] > a[j] ){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}//反過來就要交換
		}
	}
// (2) Output
	for(int i=0; i<100; i++){
		printf("%d\n", a[i] );
	}
}
