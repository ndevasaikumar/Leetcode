/*
Intuition
When consecutive numbers appear in a sorted array, we can group them as ranges. This helps compress the output meaningfully. If numbers break the sequence, we store the previous range and start a new one.

Use two pointers: start and end. Iterate through the list. If the next number is not consecutive, finalize the current range. At the end, don’t forget to add the last range. This single pass ensures correctness and efficiency.

Complexity
Time Complexity:

( O(n) ) — iterate through all numbers once.
Space Complexity:

( O(n) ) — for storing result ranges.


*/
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (n == 0) return res;
        int start = nums[0], end = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == end + 1)
                end = nums[i];
            else {
                if (start == end) {
                    res.push_back(to_string(start));
                } else {
                    res.push_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];
                end = nums[i];
            }
        }

        if (start == end) {
            res.push_back(to_string(start));
        } else {
            res.push_back(to_string(start) + "->" + to_string(end));
        }
        return res;
    }
};
