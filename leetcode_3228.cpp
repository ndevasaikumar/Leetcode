class Solution {
public:
    int maxOperations(string s) {
        int zeros = 0 , res = 0;
        int n = s.length();
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '0'){
                // count zeros that are followed by a 1 or end of string
                if(i == n - 1 || s[i + 1] == '1')
                    zeros++;
            }
            else
                // each '1' can pair with previous '0' segments
                res += zeros;
        }
        return res;
    }
};

