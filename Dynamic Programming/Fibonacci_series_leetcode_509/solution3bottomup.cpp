class Solution {
    public:
    
        int fib(int n) {
            if(n<=1) return n;
            vector<int> mem(n+1,-1);
            mem[0]=0;
            mem[1]=1;
    
            for(int i=2;i<=n;i++){
                mem[i]=mem[i-1]+mem[i-2];
            }
            return mem[n];
        }
    };



    // bottom up upproacgh with a time complexity of O(N) and space complexity of O(n)