///Week14-3.cpp step02-1 �V�q���k(���n)
#include <stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    int ans=0;
    for(int i=0; i<3; i++){
        ans += a[i]*b[i];
    }       ///���������_��
    printf("ans:%d\n", ans);
}
