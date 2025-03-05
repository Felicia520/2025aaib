///week03-3.cpp
#include <stdio.h>
int main()
{/// 從0開始, 中間有「多少」,就跑「多少」次
    for(int i=0 ; i<5 ; i++){
        printf("%d " , i );
    }///電腦的for迴圈 電腦從0開始
    printf("\n");///跳行

    /// 人類比較麻煩, 從1開始
    /// 中間寫「多少」,就跑「多少」次
    for(int i=1; i<=5; i++){
        printf("%d ", i );
    }///人類的for迴圈 從1開始
}
