///Week10-1 step01-1 �ƽ�Ʀ��X��
#include <stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	int ans=0;///ans���X�ӽ��
	for(int n=2; n<=m; n++){
		//���n,�n�����O���O���
		int bad=0;
		for(int i=2; i<n; i++){//��n�p����
			if(n%i==0){
                bad=1; ///�n�����k�㰣
                break;///�J�M�a��,�N���n�A�C�C���F,���}
			}
		}
		if(bad==0){///���1�ӽ��
            ans++;///�h�@�ӽ���o!!!!
            ///printf("%d ", n);///�L�X��, �C
		}
	}
	printf("\n Ans: %d \n", ans);
}
