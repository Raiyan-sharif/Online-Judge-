#include<cstdio>
int main(){

    int maximum;
    scanf("%d",&maximum);
    int arr[maximum];
    for(int i=0;i<maximum;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=maximum-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
