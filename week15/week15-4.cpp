///Week15-4.cpp step03-2
///�禡�I�s�禡 (�²��l)
#include <stdio.h>
///�o��box�|�⵪�׺�X��
int box(int a, int b)
{   ///  �Ѥj   �ѤG
    if(a==0) return b;
    if(b==0) return a;
    return box( b, a%b );
} ///   �A�� �s�Ѥj �s�ѤG
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = box(a,b);
    printf("%d", ans);
}
