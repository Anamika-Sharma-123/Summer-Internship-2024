#include <iostream>
#include <vector>
#include <algorithm> // for std::min

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;

    int minSoFar = prices[0];
    int ans = 0;

    for (int i = 1; i < prices.size(); ++i) {
        int profit = prices[i] - minSoFar;
        if (profit > ans) {
            ans = profit;
        }
        minSoFar = min(prices[i], minSoFar);
    }

    return ans;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
