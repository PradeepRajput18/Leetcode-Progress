class Solution {
    public:
        int min(int a,int b){
            return a<b?a:b;
        }
        int minCostClimbingStairs(vector<int>& cost) {
            cost.push_back(0);
            int n = cost.size();
            for(int i=n-3;i>=0;i--){
                cost[i]=min(cost[i+1]+cost[i],cost[i+2]+cost[i]);
            }
    
    
            return min(cost[0],cost[1]);
        }
    };




    //  here we need to take decision at each point where we neeed to take like 2 so total complexity is 2^n
    // but when we added decision tree so here we are going to check using dp , where we need to find 
    //  for suppose for first two steps like 
    // should I take or not take (10,15,20)    
    //   10->(take 15 or not take 15)  but if we see againg coming to 15 we  have caluclated when in case of 10 as not take 15 so inorder to calculate it we use dp
    // see neetcode io for intuition