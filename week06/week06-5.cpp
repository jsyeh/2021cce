//step03-1 ��5�ӽҰ�@�~
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);
	if( a>c ){//����...�ϹL��
		temp=a;
		a=c;
		c=temp;
	}
	if( b>c ){//����...�ϹL��
		temp=b;
		b=c;
		c=temp;
	}	//c�̤j ^_^
	if( a>b ){//����...�ϹL��
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d %d %d", a, b, c);
}
