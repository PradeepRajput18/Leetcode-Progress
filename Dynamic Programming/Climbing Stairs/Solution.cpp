class Solution {
    public:
        int climbStairs(int n) {
            if(n<=3) return n;
    
            int prev1=1;
            int prev2=1;
    
    
            for(int i=2;i<=n;i++){
                int curr=prev1+prev2;
                prev2=prev1;
                prev1=curr;
            }
    
            return prev1;
    
        }
    };


    // if we clearly observe the question which is nothing but a pateern for fibonacci series 