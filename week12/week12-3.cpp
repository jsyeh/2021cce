///Week12-3.cpp step02-2 Selection Sort 選擇排序法
///原則: 舞台上,要留最小的!!!! (選出最小的)
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///印出陣列

    for(int i=0; i<10; i++){///左手i
        for(int j=i+1; j<10; j++){///右手j (i的右邊開始巡)
            ///左手i, 右手j (希望 小..大 )
            if( a[i] > a[j] ){///如果反過來
                int temp=a[i];///交換
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");///印出陣列
}///step02-2_再看另一種排序法-選擇排序法Selection Sort
///左手i,右手j,要讓左手小、右手大,所以如果反過來,就交換。
///外面的迴圈很簡單,左手i,右手j,寫出它的兩層迴圈, 這便是Selection Sort選擇排序法
