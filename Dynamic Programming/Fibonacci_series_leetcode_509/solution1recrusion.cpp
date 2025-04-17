class Solution {
    public:
        
        int fib(int n) {
            if(n==1) return 1; 
            if(n==0) return 0;
            if(n==2) return 1;
    
            return fib(n-1)+fib(n-2);
        }
    };



    // this problem accepts and runs on a time complexity of O(2^n) and with stack memory of O(N) calls