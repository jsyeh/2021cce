///Week12-1.cpp step01-1 �ƲߤW�g�Ъ��w�w�ƧǪk
///�ӵ� YouTube�v��, ���@�����
///https://www.youtube.com/watch?v=lyZQPjUT5B4
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///�L�X�}�C
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
