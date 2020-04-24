class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = nums.size();
        int sum = 0, ans = 0;
        unordered_map<int, int> m;
        m[0]++;
        for(int i = 0; i < l; i++) {
            sum += nums[i];
            int need = sum - k;
            ans += m[need];
            m[sum]++;
        }
        return ans;
    }
};