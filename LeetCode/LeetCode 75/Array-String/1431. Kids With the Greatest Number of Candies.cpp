class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=0, n=candies.size();
        vector<bool>v(n);
        for(auto &it : candies){
            maxx=max(maxx, it);
        }
        for(int i=0; i<n; i++){
            v[i] = (candies[i] + extraCandies >= maxx);
        }
        return v;
    }
};