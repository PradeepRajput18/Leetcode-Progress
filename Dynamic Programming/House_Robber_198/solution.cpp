class Solution {
    public:
        int max(int a,int b){
            return a>b?a:b;
        }
        int rob(vector<int>& nums) {
            int n=nums.size();
            if(n==1) return nums[0];
            if(n==2) return max(nums[n-1],nums[n-2]);
    
            // for second index max will be nums[0] so 
            nums[2]+=nums[0];
            
            for(int i=3;i<nums.size();i++){
                nums[i]+=max(nums[i-2],nums[i-3]);
            }
            return max(nums[n-1],nums[n-2]);
        }
    };



    // I have a intution that we need to check max o prevs not adjacent but back two elements Which I have added image about it
    // need to check prev 2 max elements
    // need to check other solutions as well in the senese approached I have seen others using same fibonacci logic as well