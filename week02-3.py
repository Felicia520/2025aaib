#week02-3.py�gLeetCode
#LeetCode 1. Two Sum
#���@��Ʀrnums�̭��u����ӡv�ۥ[�A�Otarget
#nums[i]+nums[j]==target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={} #���@�ӽc�l�A�̭���u�X�{�L���Ʀr�v
        #�ڭ̷Q�n��Xtraget �o�ӥ[�`

        for i, num in enumerate(nums):
            other =target-num #�t�~�@�ӻݭn���ơu�i�H��Xtarget�v��(target-num)
            if other in box: #�b�c�l�̡A���@�ӻݭn����
                return [box[other],i] #��쵪��
            else: #�p�G�S���A�X���Ʀr���
                box[num]=i #�N��{�b���Ʀrnum,���box�̭�
