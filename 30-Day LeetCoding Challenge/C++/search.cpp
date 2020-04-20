class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return -1;
        }
        int l = 0;
        int r = nums.size() - 1;
        int firstVal = nums[0];
        while(l <= r) {
            int m = l + (r - l)/2;
            if(nums[m] == target) {
                return m;
            }
            bool mGreater = nums[m] >= firstVal;
            bool tGreater = target >= firstVal;
            if(mGreater == tGreater) {
                if(target > nums[m]) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }
            else {
                if(mGreater == 1) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }
           
        }
        return -1;
    }
};