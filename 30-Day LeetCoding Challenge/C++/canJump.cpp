class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int maxJump = 1;
        for(int i = 0; i < nums.size(); i++) {
            maxJump--;
            if (maxJump == 0 && nums[i] == 0 && i != nums.size() - 1) {
                return false;
            }
            maxJump = max(maxJump, nums[i]);
        }
        return true;
    }
};