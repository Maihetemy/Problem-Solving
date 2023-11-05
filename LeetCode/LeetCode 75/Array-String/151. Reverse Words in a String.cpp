class Solution {
public:
    string reverseWords(string s) {
        stack<string>q;
        stringstream ss(s);
        string word;
        while(ss >> word)
            q.push(word);
        string ans="q";
        while(q.size()){
            string x=q.top();
            for(int i=0; i<x.size(); i++)
                ans+=x[i];
            q.pop();
            if(q.size())ans+=' ';
        }
        ans.erase(ans.begin());
        return ans;
    }
};