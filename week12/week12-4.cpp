///Week12-4.cpp step03-1 ���F���xSelection Sort, �U�g�n�ҥ��C
///�ҥH�ڭ̧Q�κƨg�{�]-��13�g�����D
///�Q�νm�߼Ҧ����@���C
///�ʼ�,�ҥH�n�ΰ}�C�ŧi�C
///�e����InputŪ�J100�Ӽ�,�̫᭱Output�L�X100�ӼơC
///�������֤�Selection Sort���f�Z�O ����i,�k��j
///�Ʊ�p��j,�ҥH�ϹL��,�N�n�洫�C
///����e���X�����Oj=i+1���a��
#include <stdio.h>
int a[100];//�b�~��,����j,�B�|�����M��0
int main()
{// (1) Input
	for(int i=0; i<100; i++){
		scanf( "%d", &a[i] );
	}
	//Selection Sort��h
	for(int i=0; i<100; i++){//����i �p���d�b�R�x
		for(int j=i+1; j<100; j++){//�k��j
			if( a[i] > a[j] ){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}//�ϹL�ӴN�n�洫
		}
	}
// (2) Output
	for(int i=0; i<100; i++){
		printf("%d\n", a[i] );
	}
}
