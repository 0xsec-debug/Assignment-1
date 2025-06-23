mport java.util.*;

class Solution {
    public static int maxProfit(int[] prices) { 
        if (prices == null || prices.length == 0) {
            return 0;
        }

        int minPrice = Integer.MAX_VALUE; 
        int maxProfit = 0;                

        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int currentProfit = prices[i] - minPrice;
                maxProfit = Math.max(maxProfit, currentProfit);
            }
        }
        return maxProfit;
    }

    public static void main(String[] args) { 
        int[] prices = {7, 1, 5, 3, 6, 4};
        System.out.println("Maximum profit: " + maxProfit(prices)); 
        
        int[] prices2 = {7,6,4,3,1};
        System.out.println("Maximum profit: " + maxProfit(prices2)); 
        
        int[] prices3 = {};
        System.out.println("Maximum profit: " + maxProfit(prices3)); 
    }
}