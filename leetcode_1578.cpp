class Solution {
public:
    //If two adajacent balloons are same color remove the less time needed balloon 
    //Time Complexicity : o(n)
    //Space Complexcity : o(1) 
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0,left = 0;
        for(int right = 1; right < colors.length(); right++){
            if(colors[left] == colors[right]){
                if(neededTime[left] < neededTime[right]){
                    res += neededTime[left];
                    left = right;
                }
                else{
                    res += neededTime[right];
                }
            }
            else
                left = right;
        }
        return res;
    }
};
