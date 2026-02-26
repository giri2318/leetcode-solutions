// Last updated: 2/26/2026, 6:10:21 PM
1int numWaterBottles(int numBottles, int numExchange) {
2    return numBottles + (numBottles-1)/(numExchange-1);
3}