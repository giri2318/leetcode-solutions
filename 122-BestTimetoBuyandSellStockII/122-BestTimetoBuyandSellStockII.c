// Last updated: 2/23/2026, 6:53:58 PM
1int maxProfit(int* prices, int pricesSize) {
2    int maxSum = 0;
3    for(int i = 1; i < pricesSize; i++){
4        int profit = prices[i]-prices[i-1];
5        if(profit > 0)
6        {
7             maxSum+=profit;
8        }
9    }
10    return maxSum;
11}