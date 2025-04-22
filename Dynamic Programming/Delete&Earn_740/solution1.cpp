class Solution {
    public:
        int deleteAndEarn(vector<int>& nums) {
            unordered_map<int,int> m;
            
            int maxval=0;
            for(int x:nums){
                 m[x]++;
                 maxval=max(maxval,x);
            }
    
            vector<int> dp(maxval+1);
    
            dp[0]=0;
            dp[1]=m[1];
    
    
            for(int i=2;i<maxval+1;i++){
                dp[i]=max(dp[i-2]+m[i]*i,dp[i-1]);
            }
    
    
            return dp[maxval];
        }
    };


    // this is the computing the previous value if it is greater store it or get curr+(not adajacent previous big value) see neetcode io video