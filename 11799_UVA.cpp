#include<cstdio>
int main(){
    int T;
    scanf("%d",&T);
    int t,k,tem=0;
    for(int j=1;j<=T;j++){
        scanf("%d",&k);
        for(int i=0;i<k;i++){
            scanf("%d",&t);
            if(t>tem){
                tem = t;
            }
        }
        printf("Case %d: %d\n",j,tem);
        k=0;t=0;tem=0;
    }
}
