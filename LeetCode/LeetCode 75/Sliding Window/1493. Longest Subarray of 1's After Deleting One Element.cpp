class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, zero = 0, maxx = 0;
        for(int r=0; r< nums.size(); r++){
            if(nums[r] == 0) zero++;
            if(zero <= 1){
                maxx = max(maxx, r-l);
            }
            else{
                if(nums[l] == 0) zero--;
                l++;
            }
        }
        return maxx;
    }
};