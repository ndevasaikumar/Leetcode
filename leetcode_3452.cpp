class Solution {
public:
    int minOperations(vector<int>& nums) {
      /*
      Count Segemnts
      Smaller number segments overlap with bigger
        */
        stack<int> st;
        int res = 0;
        for(int i  = 0; i  < nums.size(); i++){
          //Pop previous bigger elements
            while(!st.empty() && st.top() > nums[i])
                st.pop();
            if((nums[i] > 0) && (st.empty() || st.top() != nums[i])){
                res++;
                st.push(nums[i]);
            }
        }
        return res;
    }
};
