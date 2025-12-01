bool isPalindrome(int x) {
    if(x<0)return false;
    long rev=0;
    int n=x;
    while(x!=0){
        int d =x%10;
        rev=rev*10+d;
        x/=10;
    }
    if(rev==n)return true;
    return false;
}