///Week15-3.cpp step03-1 ����۰��k �H�H��!!!
/// ���� �ja �� ��b �o��pc,
/// �Ѥj���H��,�ѤG���H��,�ѤT�O���̪��l��
/// ����,����c�O0,�hb�O����
#include <stdio.h>
int main()
{
    int a, b;///a�j, b��
    scanf("%d %d", &a, &b);
    int c=a%b;///c�p

    printf("a�j��%d b����%d c�p��%d\n", a, b, c);
    ///while(c!=0){
    while(1){
        if(c==0) break;///���}�j��
        a=b;///�Ѥj���H��(�ѤG�ܦѤj)
        b=c;///�ѤG���H��(�ѤT�ܦѤG)
        c=a%b;///�ѤT�O���̪��l��
        printf("a�j��%d b����%d c�p��%d\n", a, b, c);
    }
    printf("�]��c�O0,���}�j��,�ӥB���׬O������b\n");
    printf("%d", b);
}
