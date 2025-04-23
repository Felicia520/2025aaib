/// week10-2.cpp
///為了下周考試「反敘數字」我們要教%10 /10剝皮法
#include <stdio.h>
int main(){
    printf("請輸入1個數字(ex. 379):");
    int n;
    scanf("%d", &n);
    printf("你輸入了 %d\n", n); ///讀入輸入的整數
    ///printf("它的個位數是 %d\n",n%10);
    ///printf("它的十位數是 %d\n",n/10 %10);
    ///printf("它的百位數是 %d\n",n/10/10 %10);
    while(n>0){
        printf("現在把 %d 剝皮 %d\n", n, n%10);
        n = n/10;
    }
}
