///Week13-4.cpp step02-3 比較特別的函式,有參數
#include <stdio.h>
void printStar( int n )
{
    for(int i=0; i<n; i++ ) printf("*");

}
int main()
{
    for(int i=1; i<10; i++){
        printStar(i);
        printf("\n");
    }
}
