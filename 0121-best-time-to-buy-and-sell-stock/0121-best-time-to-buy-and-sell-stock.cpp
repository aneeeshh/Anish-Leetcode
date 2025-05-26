class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
    int maxProfit = 0;

    for (int today : prices) {
        if (today < lowest) {
            lowest = today;
        }
        int todayProfit = today - lowest;
        if (todayProfit > maxProfit) {
            maxProfit = todayProfit;
        }
    }

    return maxProfit;
    }
};