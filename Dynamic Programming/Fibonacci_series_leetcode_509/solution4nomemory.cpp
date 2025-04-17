class Solution {
    public:
    
        int fib(int n) {
            if(n<=1) return n;
            int prev2=0;
            int prev1=1;
    
    
            // this is the solutiuon created on the logic fib is sum of prev two numbers so here we add prev 1 & 2 numbers 
            // and change thos (updating) numbers here
            // returning prev1 as it is updated value
            for(int i=2;i<=n;i++){
                int curr=prev1+prev2;
                prev2=prev1;
                prev1=curr;
            }
            return prev1;
        }
    };



    // this is special case where we are not using any memory and with a time complexity of O(N)