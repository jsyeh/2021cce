///Week15-2.cpp step02-2 ����۰��k
/// ���I:�u���k�v�u�l�ơv�u����v
/// �f�Z: �j �� �� �o��l�� �p
/// �]�N�O���� �ja �� ��b �o��pc,
/// �Ѥj���H��,�ѤG���H��,�ѤT�O���̪��l��
/// ����,����c�O0,�hb�O����
#include <stdio.h>
int main()
{
    int a, b;///a�j, b��
    scanf("%d %d", &a, &b);

    int c=a%b;///c�p
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d", b);
}
