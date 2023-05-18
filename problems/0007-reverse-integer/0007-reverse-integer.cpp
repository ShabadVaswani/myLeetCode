class Solution {
public:
    int reverse(int x) {
        long long int y =0;
        while(x != 0 ){
            y*=10;
            y+= x%10;
            x/=10;
        }
        if(y<-2147483648||y>2147483647)return 0;
        return y;
    }
};