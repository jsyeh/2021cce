//step03-1 第5個課堂作業
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);
	if( a>c ){//不幸...反過來
		temp=a;
		a=c;
		c=temp;
	}
	if( b>c ){//不幸...反過來
		temp=b;
		b=c;
		c=temp;
	}	//c最大 ^_^
	if( a>b ){//不幸...反過來
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d %d %d", a, b, c);
}
