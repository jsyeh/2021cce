#include <stdio.h>//Week14-5.cpp step02-3 改矩陣乘法
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d", &n);
	//(1)讀入Input A
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}//整個A都讀完了, 才能讀下面的B
	//(2)再讀 Input B, 所以上下兩個不能合併
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j] );
		}
	}
	//(3)我們動手腳,改題目, 改成矩陣加法=>矩陣乘法
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//c[i][j] = a[i][j] + b[i][j];
			c[i][j]=0;
			for(int k=0; k<n; k++){
				c[i][j] += a[i][k]*b[k][j];
			}
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}
