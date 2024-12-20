class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {   

    vector<int> total(accounts.size());
    int max_wealth ;
        
  //loop over rows
        for (int rows =0; rows < accounts.size() ; rows++) {
            int cust_total = 0;
            // loop over cols
            for (int cols = 0; cols < accounts[rows].size() ; cols ++) {
                cust_total += accounts[rows][cols]; 
            }
            total[rows] = cust_total;
        }

        max_wealth = *max_element(total.begin(), total.end());
        
    return max_wealth;
    }
};