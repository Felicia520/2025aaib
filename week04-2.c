///week04-2.c 是今天的LeetCode挑戰是 Easy 題(二合一)
///LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
int maximumCount(int* nums, int numsSize) {

    int pos = 0,neg = 0; ///迴圈前面都是0
    for(int i=0; i<numsSize; i++){
        if( nums[i] > 0 ) pos++; ///正數
        if( nums[i] < 0 ) neg++; ///負數
    }///迴圈中間,更新、修改他

    ///迴圈後面,把它拿來用
    if(pos>neg) return pos; ///正數比較多,
    else return neg; ///不然,就負數
}
