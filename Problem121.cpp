#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = prices[0];  // Lowest price so far
        int bestProfit = 0;        // Best profit so far
        
        for (int i = 1; i < prices.size(); i++) {
            // Found a cheaper price? Remember it
            cheapest = min(cheapest, prices[i]);
            
            // What profit if I sell today?
            int todayProfit = prices[i] - cheapest;
            
            // Is this the best profit so far?
            bestProfit = max(bestProfit, todayProfit);
        }
        
        return bestProfit;
    }
};