///week13-4.cpp �g�Q�Ѫ��D�Դ�,��C++�Ӽg
///Leetcode 3335. Total Characters in String After Transformations I
///'a'�|��'b','b'�|��'c' ... 'z'�|�ܨ�Ӥp�r��'a'�M'b'
class Solution {
public:
    int a[200000] ={}; ///�j���}�C,���Y���O0,�|��X�Ӫ�����
    int helper(int t){ ///�ϥΡu�禡�I�s�禡�v
        if( a[t] > 0) return a[t]; ///���񵪮סA�N�⵪�ת������ӥ�
        if( t<26) return 1; ///�٬O�@�Ӧr��
        a[t] = (helper(t-26) + helper(t-26+1)) % 1000000007; ///�̭���8��0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){ ///C++���y�k�A�i�H��Ӧr�����X��
            ans = (ans + helper(t+c-'a')) % 1000000007; ///�̭���8��0
        }
        return ans;
    }
};
