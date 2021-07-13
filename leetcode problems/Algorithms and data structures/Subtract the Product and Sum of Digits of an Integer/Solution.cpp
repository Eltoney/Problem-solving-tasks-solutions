class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = n%10 , prod = n%10;
        n /= 10;
        while(n > 0){
            sum += n % 10;
            prod *= n % 10;
            n /= 10;
            
        }
        return prod - sum;
    }
};

//submission link: https://leetcode.com/submissions/detail/501708003/
