///Week17-1.cpp step01-1 剝皮
#include <stdio.h>
int main()
{
    int N=20030101;///有個數字,每一位都拆出來
    ///餘數 %10 得到個位數
    ///除法 /10 得到 2003010
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);

    N = N/10;///變小
    printf("%d => %d %d\n", N, N/10, N%10);
}
