///week12-3.cpp
///Fibonacci 數列(前2項相加,就是下1項
///要把她列出來 使用for迴圈、陣列
#include <stdio.h>
int main()
{
    int a[30] = {0,1};
    printf("1 ");
    for (int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ",a[i]);
    }
}
