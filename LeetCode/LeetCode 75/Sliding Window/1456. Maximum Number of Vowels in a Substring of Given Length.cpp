class Solution {
public:
    bool Vowels(char c) {
        if(c == 'a' || c == 'u' || c == 'i' || c == 'o' || c == 'e')
               return true;
        else return false;    
    }
    int maxVowels(string s, int k) {
        int j = 0, c=0, maxx = 0; 
        for(int i=0; i<s.size(); i++){

            if(Vowels(s[i])) c++;
            
            if(i-j+1 == k){
                maxx = max(maxx, c);
                if(Vowels(s[j])) c--;
                j++;
            }
        }
        return maxx;
    }
};