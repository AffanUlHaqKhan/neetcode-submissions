class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minB = prices[0];

        for (auto sell: prices){
            maxP = std::max(maxP, sell - minB);
            minB = std::min(minB, sell);
        }
        return maxP;
    }
};
