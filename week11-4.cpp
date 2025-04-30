/// week11-4.cpp
///1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0; ///癹伴玡ans琌0
        for(int i=0; i<nums.size(); i++){
            int now = nums[i]; ///瞷矪瞶 nums[i]
            ///Q:笵nums[i]琌碭计?
            int digits =0;
            while(now>0){
                digits++;
                now =now / 10;
            }
             if(digits%2==0) ans++; ///癹伴柑, 案计计,ans++
        }
        return ans;
    }

};
