///Week13-6.cpp step03-2 百數反印, 讓大家熟悉陣列的頭尾
///a[0]...a[99]

#include <stdio.h>
int a[100];

int main()
{
	for(int i=0; i<100; i++) scanf("%d", &a[i] );

	for(int i=99; i>=0; i--) printf("%d\n", a[i] );
}
