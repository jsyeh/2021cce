///第2個作業 step02-1
#include <stdio.h>
int main()
{
    int a=123, b=10;
    ///a是123,b是10
    int ans= a/b;
    /// ans是a/b 整數除法,只留整數
    float ans2=123.0/10.0;
    ///floating point 浮點數,會慢10-20倍
    printf("整數除整數 %d\n", ans);
    printf("float的除法 %f\n", ans2);
}
