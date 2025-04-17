class Solution {
    public:
        vector<int> mem;
        Solution():mem(31,-1){
            mem[0]=0;
            mem[1]=1;
            mem[2]=1;
        }
        int fib(int n) {
            if(mem[n]!=-1) return mem[n];
            int ans = fib(n-1)+fib(n-2);
            mem[n]=ans;
            return ans;
        }
    };



    // this is top down approach where we are not calculating existing calculated values 
    //  with time complexity of O(n) and space complexity O(n)+O(N) for call stack + vector