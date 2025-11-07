class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;
        int n = timeSeries.size();
        for(int i = 0; i < n - 1; i++){
            //Check the next one is Reseting the poision or not
            //if not resetting  the poison add the duration
            //else add the difference b/w i & i + 1
            total += min(timeSeries[i + 1] - timeSeries[i], duration);
        }
        if(n)
            total += duration;
        return total;
    }

};
