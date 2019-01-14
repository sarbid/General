class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i;
        int len = cost.size();
        int *min_cost = (int *)malloc(len * sizeof(int));
        min_cost[0] = cost[0];
        min_cost[1]= cost[1];
        int min=0;
        for(i=2;i<len;i++)
        {
            if(min_cost[i-1] >= min_cost[i-2])
                min = min_cost[i-2];
            else
                min= min_cost[i-1];
            min_cost[i] = min+cost[i];
        }
         if(min_cost[i-1] >= min_cost[i-2])
                min = min_cost[i-2];
            else
                min= min_cost[i-1];
        return min;
    }
};
