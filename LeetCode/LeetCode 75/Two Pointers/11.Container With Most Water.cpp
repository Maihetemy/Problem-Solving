class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r= height.size()-1, maxx = 0;
        while(l<r){
            maxx = max(maxx, ((r-l) * min(height[l], height[r])));
            if(height[l] > height[r]) r--;
            else l++;
        }
        return maxx;
    }
};