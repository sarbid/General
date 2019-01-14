class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int i,j;
        int **arr = (int**)malloc(len  * sizeof(int*));
        for(i=0;i<len;i++)
        {
            arr[i]= (int*)malloc(len * sizeof(int));
        }
        //arr = (int *)malloc(len * len *sizeof(int));
        int max =0;
        int profit=0;
        if (len ==0)
            return 0;
        for(i=0;i<len;i++)
        {
             arr[i][i] =0;
        }
        
        for(i=0;i<len;i++)
        {
            
            for(j=i+1;j<len;j++)
            {
                if(prices[i] < prices[j] )
                {
                    profit = prices[j]- prices[i];
                    
                }                
                if(profit > max) {
                    max = profit;
                }
            }
            
        }
    return max;
    }
};
