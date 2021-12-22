///Week15-4.cpp step03-2
///函式呼叫函式 (黑盒子)
#include <stdio.h>
///這個box會把答案算出來
int box(int a, int b)
{   ///  老大   老二
    if(a==0) return b;
    if(b==0) return a;
    return box( b, a%b );
} ///   再問 新老大 新老二
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = box(a,b);
    printf("%d", ans);
}
