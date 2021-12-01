///Week12-1.cpp step01-1 複習上週教的泡泡排序法
///照著 YouTube影片, 做一輪比較
///https://www.youtube.com/watch?v=lyZQPjUT5B4
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///印出陣列
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
