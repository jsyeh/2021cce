///week08-5.cpp step03-2
#include <stdio.h>
int main()
{///三角形
    printf("1: *\n");///1樓,1顆星
    printf("2: **\n");///2樓,2顆星
    printf("3: ***\n");///3樓,3顆星
    printf("4: ****\n");///4樓,4顆星
    printf("5: *****\n");///5樓,5顆星
    printf("6: ******\n");///6樓,6顆星
    ///高度越高,程式越多... ex. 40層

    int n=6;
    for(int i=1; i<=n; i++){///先建出樓層,第i樓
        printf("%d: ", i);///第i樓
        for(int k=1; k<=i; k++) printf("*");///第i樓,i顆星
        printf("\n");
    }
}
