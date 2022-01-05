# Week03

## Week03-1.cpp
```C
///(1)開新檔案 File-New-EmptyFile(Ctrl-Shift-N)
///黑黑的...不對,要
///(2) File-Save As 另存新檔 week03-1.cpp
#include <stdio.h> ///Standard Input Output
   ///中間有空白 右邊不是 studio 是 stdio
int main()
{  ///圓括號,很像數學函數式 ex. cos(30)
    printf("Hello World\n");
}///有一根很細的線 游標
///大括號{} 把很多程式括起來

```

## Week03-2.cpp
```C
#include <stdio.h>
int main()           ///新的一行,跳行
{             /// 反斜線\n 代表 new line
    printf("Hello World\n");
    printf("Hello World\n");
}

```

## Week03-3.cpp
```C
#include <stdio.h>
int main()           ///新的一行,跳行
{             /// 反斜線\n 代表 new line
    printf("Hello World\n");
    printf("%d\n", 300 );
    printf("%d %d  %d\n, 300, 200, 100");
} ///%d decimal digit 10進位的整數

```

## Week03-4.cpp
```C
///第4張圖 (step02-2)
#include <stdio.h>
int main()
{
    int a;
    printf( "請輸入一個數字a: " );

    scanf(  "%d" , a );///在小黑打 100 Enter
    printf( "你剛剛輸入的是:%d", a);
}

```

## Week03-5.cpp
```C
///第5張圖 step03-1
///兩數相加
#include <stdio.h>
int main()
{///整數a, b 兩個整數(integer)哦
    int a, b; ///變數就是
    scanf( "%d%d", &a, &b );
    printf( "%d" ,  a+b );
}

```