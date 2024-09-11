class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n1 = INT_MAX;
        int n2 = INT_MAX;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > n1 && nums[i] > n2) return true;
            if(nums[i] > n1) n2= nums[i];
            else n1 = nums[i];
        }
        return false;
    }
};