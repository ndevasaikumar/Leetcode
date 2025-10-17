/* Algorithm
Create three integer variables left, right and sumOfCurrentWindow. The variables left and right form a subarray by pointing to the starting and ending indices of the current subarray (or window), and sumOfCurrentWindow stores the sum of this window. Initialize all of them with 0.
Create another variable res to store the answer to the problem. We initialize it to a large integer value.
We iterate over nums using right starting from right = 0 till nums.length - 1 incrementing right by 1 after each iteration. We perform the following inside this iteration:
Add element at index right to the current window, incrementing sumOfCurrentWindow by nums[right].
We check if sumOfCurrentWindow >= target. If so, we have a subarray that satisfies our condition. As a result, we attempt to update our answer variable with the length of this subarray. We perform res = min(res, right - left + 1). We then remove the first element from this window by reducing sumOfCurrentWindow by nums[left] and incrementing left by 1. This step is repeated in an inner loop as long as sumOfCurrentWindow >= target.
The current window's sum is now smaller than target. We need to add more elements to it. As a result, right is incremented by 1.
Return res. */

/*Minimum size sub array */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int right = 0 , left = 0,size = 0;
        int min_len = INT_MAX;
        for(; right < nums.size(); right++){
            size += nums[right];
            while(size >= target){
                min_len = min(min_len,(right - left) + 1);
                size -= nums[left];
                left++;
            }
        }
        return min_len == INT_MAX ? 0 : min_len;
    }
};
