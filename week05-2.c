class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;

        long int num=x,a=0,b=0;

        while(x!=0){
        a=x%10;
        b=b*10+a;
        x/=10;

        }
        if (num==b)
        return true;
        else return false;
    }
};
