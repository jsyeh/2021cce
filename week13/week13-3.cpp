///Week13-3.cpp step02-2 比較特別的函式,有參數
#include <stdio.h>
void printStar( int n )///我們自己發明的函式
{///不送出來,   送入 1個整數
    for(int i=0; i<n; i++ ) printf("*");

}///因為void 不送出, 所以不用return 0
int main()
{
    printStar(7);///在呼叫call它之前, 要先定義好
}
