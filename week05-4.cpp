///week05-4.cpp
///LeetCode 3191. Minimum Operations to Make Binary Array Elements Equal to One I
///要做幾次「3個數翻牌」才能全部變成1
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0; ///要「翻牌翻幾次」

        for(int i=0; i<nums.size()-2 ; i++){
            if(nums[i]==0){ ///遇到0要翻牌
                ans++; ///翻牌加1次
                nums[i+1] = 1 - nums[i+1]; ///反過來
                nums[i+2] = 1 - nums[i+2]; ///反過來
            }
        }
        int N = nums.size();
        if(nums[N-1]==0 || nums[N-2] == 0)return -1; ///最後0失敗
        return ans; ///可以成功「翻牌」全部變成1
    }
};
