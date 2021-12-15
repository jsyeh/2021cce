///Week14-3.cpp step02-1 向量乘法(內積)
#include <stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    int ans=0;
    for(int i=0; i<3; i++){
        ans += a[i]*b[i];
    }       ///對應項乘起來
    printf("ans:%d\n", ans);
}
