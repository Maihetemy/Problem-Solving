class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // Brute Force
        int c=0, sz=flowerbed.size(); 
        for(int i=0; i<sz; i++){
            if( (i == 0 || flowerbed[i-1] == 0) && flowerbed[i] == 0 &&
                (i == sz-1 || flowerbed[i+1] == 0) ){
                    c++, flowerbed[i] = 1;
                }
        }
        return c >= n;
    }
};