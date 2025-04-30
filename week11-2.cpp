///week11-2.cpp
///函式宣告、函示定義、函式呼叫 (函數/函式)
#include <stdio.h>

int addnum(int a,int b)///宣告2個參數的形狀名字
{///前面式 函數/函式 的定義
    printf("現在進入 addnum() 函式裡, a:%d b:%d\n",a,b);
    int x;
    x = a + b;
    printf("兩樹相加後,得到數值 %d將return 回傳\n",x);
    return x;///回傳給剛剛較用的地方
}

int main(){
    int ans = addnum(10, 30); ///我們使用/呼叫剛剛「自訂函式」
    printf("%d",ans);
}
