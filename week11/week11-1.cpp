///Week11-1.cpp step01-1 ���ƥ��L�X
///(1) �P�_ n ���  for(int i=2; i<n; i++){
///       if(n%i==0) bad=1; �̫�ݦ��S���a��
///(2) �� M �H�U����ƥ��L
///   for(int n=2; n<=M; n++){
///       �A�� (1) ����ƧP�_
///(3) �ֳt����ƿz�l�k a[i] �ӧP�_
///(4) ex. ���X��, ex. ���L
///(5) �C�L�eN�ӽ��.....
#include <stdio.h>
int a[10000000]={0,0,0,0};
int main()
{
	int m=10000000;
	//scanf("%d", &m);
	printf("�Q���D�e5000�ӽ��!!!!\n");
	int ans=0;
	for(int i=2; i<m; i++){
		if(a[i]==0){///�����i
            printf("%d ", i );///��i�L�X��
			ans++;///�h�@��,�}��!!!
			if(ans==5000) break;
			for(int k=i+i; k<m; k+=i){
				a[k]=1;
			}
		}
	}
	printf("�`�@: %d\n", ans);
}
