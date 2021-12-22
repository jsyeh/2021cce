///Week15-3.cpp step03-1 輾轉相除法 碎碎唸!!!
/// 持續 大a 除 中b 得到小c,
/// 老大換人當,老二換人當,老三是它們的餘數
/// 持續做,直到c是0,則b是答案
#include <stdio.h>
int main()
{
    int a, b;///a大, b中
    scanf("%d %d", &a, &b);
    int c=a%b;///c小

    printf("a大的%d b中的%d c小的%d\n", a, b, c);
    ///while(c!=0){
    while(1){
        if(c==0) break;///離開迴圈
        a=b;///老大換人當(老二變老大)
        b=c;///老二換人當(老三變老二)
        c=a%b;///老三是它們的餘數
        printf("a大的%d b中的%d c小的%d\n", a, b, c);
    }
    printf("因為c是0,離開迴圈,而且答案是中間的b\n");
    printf("%d", b);
}
