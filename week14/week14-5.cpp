#include <stdio.h>//Week14-5.cpp step02-3 ��x�}���k
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d", &n);
	//(1)Ū�JInput A
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}//���A��Ū���F, �~��Ū�U����B
	//(2)�AŪ Input B, �ҥH�W�U��Ӥ���X��
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j] );
		}
	}
	//(3)�ڭ̰ʤ�},���D��, �令�x�}�[�k=>�x�}���k
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
