///Week15-1.cpp step02-1 �̤j���]��
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);///2���
    if(a<0) a=-a; ///��Ʀ��t��,�N�⥿���N�n�F
    if(b<0) b=-b;

	int ans=1;
	for(int i=1; i<=a; i++){ ///�o�Ӱj��,�n�]�ܦh��
		if( a%i==0 && b%i==0 ) ans=i;
	}   ///���i�H�㰣,�i�H����,good!!!����
	printf("%d", ans );
	return 0;
}
