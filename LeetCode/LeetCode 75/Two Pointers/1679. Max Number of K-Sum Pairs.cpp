class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int c=0;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] > 0 && mp[k-nums[i]] > 0){
                if(nums[i] ==  k-nums[i]){
                    c += mp[nums[i]]/2;
                     mp[nums[i]] %= 2;
                }
                else{
                    int num = min(mp[nums[i]], mp[k-nums[i]]); 
                    c += num;
                    mp[nums[i]] -= num;
                    mp[k-nums[i]] -= num;
                }
            }
        }
        return c;
    }
};