///Week16-4.cpp step02-2 �Q���R�r��, �̭����X��0�X��1
#include <stdio.h>
char line[300] = "10101001010101010101011010001001010100";
int main()
{
    int ans=0;

    for(int i=0; line[i] != '\0' ; i++){ ///�H�e,���D���ת���
    ///int i=0; ///�ҥ�:
    ///while( line[i] != '\0' ){
        if( line[i] == '1') ans++;

    ///    i++;
    }
    printf("��%d��1\n", ans);
}