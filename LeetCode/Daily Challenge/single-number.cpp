
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
        if(nums.empty()) return 0;

        int xorr = nums[0];
        for(int i = 1; i<nums.size();i++) {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};
