///Week12-2.cpp step02-1 �~��w�w�ƧǪk
///�ϥ� C Tutor �d�ݭ�� step01-1 �@����,�{�b�n���ܦh��
#include <stdio.h>
///int a[10]={3,0,1,8,7,2,5,4,6,9};
int a[10]={9,8,7,6,5,4,3,2,1,0};///�������ϹL�ӤF!!!!!
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///�L�X�}�C
    for(int k=0; k<10; k++){
        ///--------���@��------
        for(int i=0; i<10-1; i++){///�p�߭n�u��1�v����]
            if( a[i] > a[i+1] ){///�p�ߤj�A��, �p�ߡu�j��p��v
                int temp=a[i];///�p�߭n�洫������
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");///�L�X�}�C
    }
}
