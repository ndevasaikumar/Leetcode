class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i  = 0,n = word.length();
        string res  = "";
        bool rev = 0;
        while(i < n){
            res += word[i];
            if(word[i] == ch){
                rev = 1;
                break;
            }
            i++;
        }
        if(rev){
            reverse(res.begin(),res.end());
            i++;
            while(i < n){
                res += word[i];
                i++;
            }
        }
        return res;
    }
};
