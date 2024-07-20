class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
    if (prices.size() < 2) {
        return 0;
    }
    
    int min_price = numeric_limits<int>::max(); // initialize to a large number
    int max_profit = 0;
    
    for (int price : prices) {
        if (price < min_price) {
            min_price = price;
        } else if (price - min_price > max_profit) {
            max_profit = price - min_price;
        }
    }
    
    return max_profit;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};
    
    int result1 = maxProfit(prices1);
    int result2 = maxProfit(prices2);
    
    cout << "Result 1: " << result1 << endl; // Output: Result 1: 5
    cout << "Result 2: " << result2 << endl; // Output: Result 2: 0
    
    return 0;
}
};
