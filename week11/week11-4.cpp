///Week11-4.cpp step03-1 �u�� 9���w�w�B�_�Ӫ�����
#include <stdio.h>///https://www.youtube.com/watch?v=lyZQPjUT5B4
///int a[10] = {3,0,1,8,7,2,5,4,6,9};
int a[10] = {9,8,7,6,5,4,3,2,1,0};///�d�@,�����ϹL��
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");///�L�X�}�C

    for(int k=0; k<10-1; k++){
        ///==================================
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){///�p�G�۾F2�H,�j�p����
                int temp = a[i];///�洫���諸����
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i]);
        printf("\n");///�L�X�}�C
    }
}
