///Week12-3.cpp step02-2 Selection Sort ��ܱƧǪk
///��h: �R�x�W,�n�d�̤p��!!!! (��X�̤p��)
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///�L�X�}�C

    for(int i=0; i<10; i++){///����i
        for(int j=i+1; j<10; j++){///�k��j (i���k��}�l��)
            ///����i, �k��j (�Ʊ� �p..�j )
            if( a[i] > a[j] ){///�p�G�ϹL��
                int temp=a[i];///�洫
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///�L�X�}�C
}///step02-2_�A�ݥt�@�رƧǪk-��ܱƧǪkSelection Sort
///����i,�k��j,�n������p�B�k��j,�ҥH�p�G�ϹL��,�N�洫�C
///�~�����j���²��,����i,�k��j,�g�X������h�j��, �o�K�OSelection Sort��ܱƧǪk