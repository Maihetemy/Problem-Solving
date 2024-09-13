class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector<double>suf(nums.size()+1, 0);
        for(int i = 0; i < nums.size(); i++){
            suf[i+1] = suf[i] + nums[i];
        }
        double maxx = INT_MIN;
        for(int i = 0; i < suf.size()-k; i++){
            maxx = max((suf[i+k] - suf[i])/k, maxx);
        }
        return maxx;
    }
};