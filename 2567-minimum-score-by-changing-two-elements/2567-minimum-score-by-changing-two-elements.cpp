class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int a1 = nums[n-1]-nums[2];
        int a2 = nums[n-3]-nums[0];
        int a3 = nums[n-2]-nums[1];

        return min({a1,a2,a3});
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna