/// week11-4.cpp
///1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0; ///迴圈前面ans是0
        for(int i=0; i<nums.size(); i++){
            int now = nums[i]; ///現在處理 nums[i]
            ///Q:如何知道nums[i]是幾位數?
            int digits =0;
            while(now>0){
                digits++;
                now =now / 10;
            }
             if(digits%2==0) ans++; ///迴圈裡, 偶數的為數時,ans++
        }
        return ans;
    }

};
