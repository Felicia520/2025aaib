///week08-2
///泡泡排序法的模擬
#include <stdio.h>
int main(){
    int a[10] = {3,0,1,8,7,2,5,4,6,9};
    for(int i=0; i<10; i++)printf("%d ",a[i]);
    printf("\n");

    for(int k=0; k<20; k++){///重複做很多次
        for(int i=0; i<10-1; i++){ ///兩兩相霖的跳舞
            if( a[i] > a[i+1]){///左右的大小不對
                int temp = a[i]; ///就交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++)printf("%d ",a[i]);
        printf("\n");
    }
}
