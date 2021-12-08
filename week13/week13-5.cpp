///Week13-5.cpp step03-1 我們寫了2個函式
#include <stdio.h>
void printStar( int n )
{
    for(int i=0; i<n; i++ ) printf("*");
}
void printSpace( int n )
{
    for(int i=0; i<n; i++ ) printf(" ");
}
int main()
{
    for(int i=1; i<10; i++){
        printSpace(9-i);
        printStar(i);
        printSpace(9-i);
        printStar(i);
        printSpace(9-i);
        printStar(i);
        printf("\n");
    }
}///函式的優點:程式碼可以變簡單、變清楚
