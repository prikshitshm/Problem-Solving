class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int mini=prices[0];

        for(int i=01;i<n;i++){
            int cost =prices[i]-mini;
            profit=max(profit,cost);
              mini=min(mini,prices[i]);
        }
      
        return profit;
    }
};
