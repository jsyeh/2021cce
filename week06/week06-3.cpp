//Step02-1 ���Ѫ���3�ӵ{��,
//���D��2���Ȥ~�৹��, ��1�ӥ���:��c�����̤j
//2����: (1) ��c�̤j!!!!!
//       (2) a*a+b*b == c*c
#include <stdio.h>
int main()
{
	int a, b, c;
	int temp;
	scanf("%d%d%d", &a, &b, &c);
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);
	if( a > c ){//�Ʊ�c�̤j,������ a�j
		temp=a;//�洫 a c
		a=c;
		c=temp;
	}
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);
	if( b > c ){//�Ʊ�c�̤j,������ b�j
		temp=b;//�洫 b c
		b=c;
		c=temp;
	}
	printf("�{�ba:%d b:%d c:%d\n",a,b,c);
}
