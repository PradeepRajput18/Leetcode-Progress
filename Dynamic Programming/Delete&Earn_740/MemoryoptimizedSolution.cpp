class Solution {
    public:
        int deleteAndEarn(vector<int>& nums) {
            unordered_map<int,int> m;
            
            int maxval=0;
            for(int x:nums){
                 m[x]++;
                 maxval=max(maxval,x);
            }
    
            // vector<int> dp(maxval+1);
    
            int earn1=0;  //dp[0]
            int earn2=m[1];  //dp[1]
    
    
            for(int i=2;i<maxval+1;i++){
                int curr=max(earn1+m[i]*i,earn2);
                earn1=earn2;
                earn2=curr;
            }
    
    
            return earn2;
        }
    };


    // removed unwanted vector we just need past two values 
    // here earn 1 represents not adjacent (according to condition) value 
    // earn2 is the adjacent value if is greater then store it it can be used for furture purpose 