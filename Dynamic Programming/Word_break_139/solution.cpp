class Solution {
    public:
        bool wordBreak(string s, vector<string>& word) {
            
            int n=s.size();
            unordered_map<string,bool> m;
            for(string x:word) m[x]=true;
            vector<bool> dp(n+1,false);
            dp[0]=true;
            for(int i=0;i<n;i++){
    
                for(int j=0;j<=i;j++){
                    string substr=s.substr(j,i-j+1);
                    if(dp[j] && m.find(substr)!=m.end()){
                        // this is very crutial logic where string is added from here 
                        dp[i+1]=true;
                        break;
                    }
                }
            }
    
            return dp[n];
        }
    };



    // this is very facinating problem including dp in it is a big deal but this time complexiyt is O(n^3) one is iterating it take O(n^2) and additional iteration for comparision