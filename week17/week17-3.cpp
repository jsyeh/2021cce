///Week17-3.cpp step01-3 剝皮 要配合 while(迴圈),加總
#include <stdio.h>
int main()
{
    int N=1234567892;

    int sum=0;
    while( N > 0 ){ ///還有皮? 繼續剝
        ///printf("%d => %d %d\n", N, N/10, N%10); ///剩下的 剝掉的
        sum += N%10;
        N = N / 10; ///最重要,把N除小  剝掉皮
    }
    printf("%d\n", sum );
}
