#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int x,y;
    while(scanf("%lld lld",&x,&y)==2  ){
        long long int ans=x-y;
        if(ans<0)ans=y-x;
        printf("%lld",ans);



    }


    }
