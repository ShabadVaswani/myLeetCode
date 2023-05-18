class Solution {
public:
    bool isPalindrome(int x) {
        long long int y =0;
        long long int t =x;
        while(x > 0 ){
            y*=10;
            y+= x%10;
            x/=10;
        }
        if(y<-2147483648||y>2147483647)return x==y;
        return t==y;
    }
};