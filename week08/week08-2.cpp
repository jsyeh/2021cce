///week08-2.cpp step02-1: �P�_1�ӼƦrn �O���O���
#include <stdio.h>
int main()
{   ///���:�u��Q1�Mn�����㰣!!!
    ///�ϸ�:�u�n����L�H�i�H�㰣,�����F!!!
    int n;
    scanf("%d", &n);

    int bad=0;///�@�}�l,�٨S���a��!
    for(int i=2; i<n; i++){/// �� 2....�p��n
        if( n%i==0 ) bad=1; ///�㰣! �a���F!
    }    /// �㰣

    if(bad==0) printf("%d�O���", n);
    else printf("%d �a���F!! ���O���", n);;
    ///��bad���ӥ�!!!
}