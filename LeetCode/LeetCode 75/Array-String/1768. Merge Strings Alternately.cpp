class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=0, w2=0;
        string s="";
        for(int i=0; i<min(word1.size(), word2.size()); i++){
            s+=word1[i];
            s+=word2[i];
        }
        if(word1.size()>=word2.size())
            for(int i=word2.size(); i<word1.size(); i++)
                s+=word1[i];
        else 
            for(int i=word1.size(); i<word2.size(); i++)
                s+=word2[i];
        return s;
    }
};