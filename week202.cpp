#include <stdio.h>
int main(){
long a,b;
while(scanf("%d%d",&a,&b)==2){
    long ans=b-a;
    if(ans<0)ans=a-b;
    printf("%d\n",ans);
}

}
