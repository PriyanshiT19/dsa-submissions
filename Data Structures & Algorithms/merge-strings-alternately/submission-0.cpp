class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s = min(word1.size(), word2.size());
        int l=0;
        string out = "";
        while(l<s){
            out += word1[l];
            out += word2[l];
            l++;
        }
        for(int i=s;i<word1.size();i++){
            out += word1[i];
        }
        for(int i=s;i<word2.size();i++){
            out += word2[i];
        }
        return out;
    }
};