int maxProfit(int* prices, int n) {
    if (n <= 1) return 0;

    int min = prices[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < min)
            min = prices[i];
        else {
            int p = prices[i] - min;
            if (p > profit)
                profit = p;
        }
    }

    return profit;
}