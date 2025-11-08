class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i  = 0 ; i < nums1.size(); i++){
            int j ;
            for(j = 0 ; j < nums2.size(); j++){
                if(nums1[i] == nums2[j])
                    break;
            }
            int x = -1;
            while(j < nums2.size()){
                if(nums2[j] > nums1[i]){
                    x = nums2[j];
                    break;
                }
                j++;
            }
            res.push_back(x);
        }
        return res;
    }
};
