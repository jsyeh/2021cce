//Step02-1 今天的第3個程式,
//本題需2任務才能完成, 第1個任務:把c換成最大
//2任務: (1) 讓c最大!!!!!
//       (2) a*a+b*b == c*c
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d", &a, &b, &c);
	printf("現在a:%d b:%d c:%d\n",a,b,c);
	if( a > c ){//希望c最大,但不幸 a大
		temp=a;//交換 a c
		a=c;
		c=temp;
	}
	printf("現在a:%d b:%d c:%d\n",a,b,c);
	if( b > c ){//希望c最大,但不幸 b大
		temp=b;//交換 b c
		b=c;
		c=temp;
	}
	printf("現在a:%d b:%d c:%d\n",a,b,c);
}
