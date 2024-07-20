//best time to buy and sell stock(Leetcode Problem)
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0]; // Initialize the minimum buy price
    int maxProfit = 0; // Initialize the maximum profit

    for (int i = 1; i < prices.size(); ++i) {
        // Update the minimum buy price
        minPrice = min(minPrice, prices[i]);

        // Calculate the profit for the current day
        int profit = prices[i] - minPrice;

        // Update the maximum profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}
