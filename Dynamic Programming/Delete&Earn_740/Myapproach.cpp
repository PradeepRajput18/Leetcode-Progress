class Solution {
    public:
        unordered_map<int,int> dp;
        unordered_map<int,int> m;
        int check(int x){
            unordered_map<int,int> copym(m.begin(),m.end());
            int point=0;
    
            while(!copym.empty()){
                point+=x;
                if(copym.find(x-1)!=copym.end()){
                    
                }
            }
    
    
        }
        int deleteAndEarn(vector<int>& nums) {
            int count=0;
            for(int x:nums) m[x]++;
    
            int n = nums.size();
            for(int i=0;i<n;i++){
                if(dp.find(nums[i])!=dp.end()){
                    continue;
                }
    
                count+=max(check(nums[i]),count);
    
    
                
            }
    
    
            return count;
    
            
        }
    };



    //  this is not  a solution , it takes lots of time and will be of n^(set(array) Complexity so 
    //  so I think I better need to learn complexities as well