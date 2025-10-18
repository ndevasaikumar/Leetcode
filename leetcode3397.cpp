/* 
Using Greedy
The approach here is firstly sort the array, as this allows us to deal with elements with the lowest values first.
Then we need to greedily pick the smallest distinct element available, which is either nums[i] - k or nums[i - 1] + 1,
As we can reduce atmost k, nums[i] - k is an option.
As we can reduce any value between [-k, k], picking the last element + 1, would also be distinct and the lowest value available.
So we simply confirm that our l doesn't exceed x + k, and then we add this element as distinct to our total count ans
*/
class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt = 0, prev = INT_MIN;
        for(int num : nums){
            int curr = min(max(num - k, prev + 1), num + k);
            if(curr > prev){
                cnt++;
                prev = curr;
            }
        }
        return cnt;
    }
};
