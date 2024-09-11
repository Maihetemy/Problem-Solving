class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0, c = 0;
        for(int i = 0 ; i <= chars.size(); i++){
            if(i == chars.size() || chars[i] != chars[j]){
                chars[c++] = chars[j];
                if(i-j > 1){
                    string num = to_string(i-j);
                    for(int k = 0; k < num.size(); k++) {
                    chars[c++] = num[k];}
                }
                 j = i; 
            }
            
        }
        return c;
    }
};