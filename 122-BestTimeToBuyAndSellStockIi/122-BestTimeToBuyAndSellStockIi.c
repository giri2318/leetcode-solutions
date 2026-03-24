// Last updated: 3/24/2026, 8:38:34 PM
int maxProfit(int* prices, int pricesSize) {
    int maxSum = 0;
    for(int i = 1; i < pricesSize; i++){
        int profit = prices[i]-prices[i-1];
        if(profit > 0)
        {
             maxSum+=profit;
        }
    }
    return maxSum;
}