class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0 ; i <= n-2 ; i++){
            if((nums[i]&1) == (nums[i+1]&1)){
                return false;
            }
        }
        return true;
    }
};