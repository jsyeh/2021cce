//Week11-5.cpp �ʼƱƧ�-�w�w�ƧǪk
#include <stdio.h>
int a[100];//(0) �ΰ}�C,�Ӧs100�ӼƦr
int main()
{//(1) Input
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}

	//���U��,�ڭ̭n�Ϊw�w�ƧǪk
	for(int k=0; k<100-1; k++){//(6) �n���X��? 100-1��
		for(int i=0; i<100-1; i++){//(5) �n�q����k ���@��
			if(a[i] > a[i+1]){//(3) a[i] a[i+1] �۾F2�Ӥ��
				int temp = a[i];//(4)���諸�ɭ�,�~�洫
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for(int i=0; i<100; i++){//(2) Output
		printf("%d\n", a[i] );
	}
}
