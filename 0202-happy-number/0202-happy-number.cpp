class Solution {
public:

    int fsq(int num){
        int sum=0;
        while(num>=1){
            sum+=(num%10)*(num%10);
            num/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=fsq(slow);
            fast=fsq(fsq(fast));

        }while(slow!=fast);
        return fast==1;

    }
};