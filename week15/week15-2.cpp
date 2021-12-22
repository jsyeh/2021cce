///Week15-2.cpp step02-2 輾轉相除法
/// 重點:「除法」「餘數」「輾轉」
/// 口訣: 大 除 中 得到餘數 小
/// 也就是持續 大a 除 中b 得到小c,
/// 老大換人當,老二換人當,老三是它們的餘數
/// 持續做,直到c是0,則b是答案
#include <stdio.h>
int main()
{
    int a, b;///a大, b中
    scanf("%d %d", &a, &b);

    int c=a%b;///c小
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d", b);
}
