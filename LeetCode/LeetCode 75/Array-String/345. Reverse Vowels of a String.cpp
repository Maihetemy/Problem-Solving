bool vowel (char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    else return false;
}
class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(auto &it : s){
            if( vowel(it) ) v.emplace_back(it);
        }
        reverse(v.begin(), v.end());
        int c=0;
        for(auto &it : s){
            if( vowel(it) ) it = v[c++];
        }
        return s;
    }
};