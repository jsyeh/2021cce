///Week08-6.cpp 是 step03-3
#include <stdio.h>

int main( void )
{
    int i,j;
    int n;

    printf("請輸入大小:");
    scanf("%d",&n);
    printf("\n");//補一個跳行

    //下面才是我們的程式碼
	for(int i=1; i<=n; i++){//Step01:鷹架,樓層
		//printf("%d: ", i);//鷹架,第i樓

		//Step03:解決空格的問題,1樓1空格,2樓2空格
		for(int k=1; k<=i; k++) printf(" ");

		//Step02:有n顆星星, 老師用1行,方便你思考!!!
		for(int k=1; k<=n; k++) printf("*");

		printf("\n");//鷹架
	}

    return 0;
}
