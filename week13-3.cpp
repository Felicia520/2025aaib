///week13-3.cpp
///用「輾轉相除法」找答案(最大公因數)
#include <stdio.h>
int gcd(int a, int b)///利用「涵是呼叫函式」解它
{ ///老大 a, 老二 b
    printf("老大a: %d 老二b: %d\n", a, b); ///印出過程
    if(a==0) return b; ///遇到0,另一邊是答案
    if(b==0) return a;
    return gcd(b, a%b);
} ///老二變老大,老三變老二
int main(){
    printf("請輸入2個數字(ex. 51 68)");
    int a, b;
    scanf("%d %d",&a,&b);
    int ans = gcd(a, b);
    printf("它的最大公因數是:%d\n",ans);
}
