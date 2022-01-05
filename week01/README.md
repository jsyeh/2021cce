# 2021cce
這是我在資傳一乙程式設計課 的 上課程式哦!!!

README.md 是用 MarkDown 語法

## 這是簡單的 git指令
```
1. Chrome設定,變成預設Browser, 再登入GitHub
2. 安裝 Git for Windows 軟體

3. 開啟 Git Bash 小黑視窗
3.1. cd desktop 走到桌面

3.2. 把雲端的倉庫 複製 下來
     git clone https://github.com/你的帳號/2021cce

3.3. 把你的修改,加進去倉庫管理的.git倉庫
     cd 2021cce 先走進入你的倉庫的目錄
     git add . 把你的修改都加進去 

3.4. git commit -m "這是我第一次用git指令commit"
     簽名,說你要怎麼上傳。
     ===But 第1次上傳出錯,因為要說「你是誰」
     ===現在真的要簽名了!!! (下面只做一次,後面要你的email及name)
          git config --global user.email "jsyeh@mail.mcu.edu.tw"
          git config --global user.name "jsyeh"

3.5. 最後,把它推送到雲端 (第一次時,會需要Chrome再登入GitHub認證)
     git push
```

# 第01週

程式碼要放到文件中, 要原汁原味, 要用特殊引用  `裡面的字就是引用`  
在數字 1,2,3,4 的左邊, 有個特別的小點 backquote \`

如果有 3個小點 \`\`\` 就可以引用一大段

```C
#include <stdio.h>
int main() ///在main()裡面,可以省略!!
{
    printf("Hello World\n");
    return 0; ///Q1: 書上有啊!!! 有寫比較好
} ///Q2: 要用大括號來結尾
///學習步驟:
///(0)學習前準備
///(1)我說給你聽(馬上忘)
///(2)我做給你看(慢慢做/截圖) 10分鐘
///(3)換你做做看(作業) 10分鐘 (卡住了/問題)
///(4)成效追蹤
```

```C
// 兩個斜線 slash
///Q3: 三個斜線 slash 可以寫中文的解釋,方便理解
/// (3)寫完程式,按上方的 Build&Run (齒輪+綠三角)
/// (1) 每次開一個新的 Empty File
///   File-New-Empty File (Ctrl-Shift-N)
/// (2) 存檔案 File-SaveAs 另存新檔
///   1016xxxx-1.cpp 不要有空格,都用英數符號
       ///小心,不要拼錯,不是 studio
#include <stdio.h>  /// #(大寫3) <>(大寫逗號/句號)
int main() ///圓括號在大寫9,0
{                  ///反斜線 backslash
    printf( "Hello World\n" );
}/// 有個f  雙引號在大寫的 Enter旁
```