class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, zeros = 0, maxx = 0; 
        for(int r=0; r<nums.size(); r++){
            if(nums[r] == 0) zeros++;
            if(zeros <= k ){
            maxx = max(maxx, r-l+1);
        }
            else if(zeros >= k && l <= r) {
                if(nums[l] == 0) zeros--;
                l++;
            }
        }
        return maxx;
    }
};