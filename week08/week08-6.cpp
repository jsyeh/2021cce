///Week08-6.cpp �O step03-3
#include <stdio.h>

int main( void )
{
    int i,j;
    int n;

    printf("�п�J�j�p:");
    scanf("%d",&n);
    printf("\n");//�ɤ@�Ӹ���

    //�U���~�O�ڭ̪��{���X
	for(int i=1; i<=n; i++){//Step01:�N�[,�Ӽh
		//printf("%d: ", i);//�N�[,��i��

		//Step03:�ѨM�Ů檺���D,1��1�Ů�,2��2�Ů�
		for(int k=1; k<=i; k++) printf(" ");

		//Step02:��n���P�P, �Ѯv��1��,��K�A���!!!
		for(int k=1; k<=n; k++) printf("*");

		printf("\n");//�N�[
	}

    return 0;
}
