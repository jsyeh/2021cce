//Week16-6.cpp step03-1
//進階題:2個程式觀念
//(1)for(迴圈),陣列
//  a[0]....a[??]
//  ex. 2021 1202
//  a[0]... a[7]
//
//(2)尾巴在哪裡?
//
#include <stdio.h>
#include <string.h>//(2)字串,要用課本strlen()
char line[3000];
int main()
{
	scanf("%s", line);
	int n = strlen( line );//(2)字串的長度
	int bad=0;
	for(int i=0; i<n; i++){
		//a[i] vs. a[n-1-i]
		if( line[i]!=line[n-1-i] ) bad=1;
	}
	if(bad==0) printf("YES");
	else printf("NO");
}
