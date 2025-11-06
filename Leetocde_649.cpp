class Solution {
public:
    string predictPartyVictory(string senate) {
      // Space Complexicity : O(N)
      //Time Complexcity :  O(N)
        queue<int> rqueue; // For pushing the Indexes of character "R"
        queue<int> dqueue; // For pushing the Indexes of character "D"
        int n = senate.length();
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                rqueue.push(i);
            else
                dqueue.push(i);
        }
        while (rqueue.size() && dqueue.size()) {
            int r = rqueue.front();
            int d = dqueue.front();
            dqueue.pop();
            rqueue.pop();
            if (r < d) {
                rqueue.push(r + n); // For iterating the string circularly. we are adding the optimal one in the end
            } else {
                dqueue.push(d + n); // For iterating the string circularly. we are adding the optimal one in the end
            }
        }
        if (rqueue.size())
            return "Radiant";
        return "Dire";
    }
};
