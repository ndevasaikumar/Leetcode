class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int distance = k;
        for(auto i : nums){
            if(i == 1){
                if(distance < k)
                    return false;
                else
                    distance = 0;
            }
            else
                distance++;
        }
        return true;
    }
};
