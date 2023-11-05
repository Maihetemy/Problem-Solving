class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // prefix and suffix production  
        int n = nums.size(), val=1;
        vector<int> ans(n, 1); 
        for(int i = 0; i < n; i++){
            ans[i] *= val;
            val *= nums[i];
        }     
        val = 1;
        for(int i = n-1; i >= 0; i--){
            ans[i] *= val;
            val *= nums[i];
        }
        return ans;
    }
};
