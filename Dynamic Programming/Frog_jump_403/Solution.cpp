class Solution {
    public:
        bool dp[2001][2001];
        bool check(vector<int>& s,int prev,int curr){
            if(curr==s.size()-1) return true;
    
            if(dp[prev][curr]==true) return false;   // if this is visited means we cannot reach using this positions
    
            int lastjump= s[curr]-s[prev];
    
            int nextIndex=curr+1;
    
            while(nextIndex<s.size() && s[nextIndex]-s[curr]<=lastjump+1){
                int newJump = s[nextIndex]-s[curr];
                int jump = newJump-lastjump;
    
                if(jump>=-1 && jump<=1){   // this condition is needed trace it with stones =[0,1,3,6,7] which is there for k case , k-1,k+-0, k+1
                    if(check(s,curr,nextIndex)) return true;
                }
    
                nextIndex++;
            }
    
            dp[prev][curr]=true;
            return false;
        }
        bool canCross(vector<int>& s) {
            if(s[1]!=1) return false; //edge case 
            memset(dp,false,sizeof(dp));
            return check(s,0,1);
        }
    };



    //  this problem is like trying all possible ways see algorithms made easy for video simple explanation