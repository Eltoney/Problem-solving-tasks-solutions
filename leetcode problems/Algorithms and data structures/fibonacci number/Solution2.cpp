class Solution {
public:
    int fib(int n) {
        int l = 0 , r = 1;
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        for(int i = 2 ;  i <= n ; i++){
            int temp = r;
            r += l;
            l = temp;
        }
        return r;
    }
};
