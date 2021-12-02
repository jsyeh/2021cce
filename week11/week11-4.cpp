///Week11-4.cpp step03-1 只做 9輪泡泡浮起來的模擬
#include <stdio.h>///https://www.youtube.com/watch?v=lyZQPjUT5B4
///int a[10] = {3,0,1,8,7,2,5,4,6,9};
int a[10] = {9,8,7,6,5,4,3,2,1,0};///悲劇,全部反過來
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i]);
    printf("\n");///印出陣列

    for(int k=0; k<10-1; k++){
        ///==================================
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){///如果相鄰2人,大小不對
                int temp = a[i];///交換成對的順序
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i]);
        printf("\n");///印出陣列
    }
}
