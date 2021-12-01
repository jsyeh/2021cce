///Week12-2.cpp step02-1 繼續泡泡排序法
///使用 C Tutor 查看剛剛 step01-1 一輪後,現在要做很多輪
#include <stdio.h>
///int a[10]={3,0,1,8,7,2,5,4,6,9};
int a[10]={9,8,7,6,5,4,3,2,1,0};///全部都反過來了!!!!!
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///印出陣列
    for(int k=0; k<10; k++){
        ///--------做一輪------
        for(int i=0; i<10-1; i++){///小心要「減1」的原因
            if( a[i] > a[i+1] ){///小心大括號, 小心「大於小於」
                int temp=a[i];///小心要交換的順序
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );
        printf("\n");///印出陣列
    }
}
