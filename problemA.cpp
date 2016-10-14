#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int c=0,k=0,m=0;

    int array1[5][5];
    for(int j=0;j<5;j++){
    for(int i=0;i<5;i++){
        scanf("%d",&array1[i][j]);
        if(array1[i][j]==1){
            k=i,m=j;
        }
    }
    }
    if(k>=2 && m>=2){
        c= (k-2)+(m-2);
    }
    else if(k<=2 && m<=2){
        c=(2-k)+(2-m);
    }
    else if(k>=2 && m<=2){
        c= (k-2)+(2-m);
    }
    else if(k<=2 && m>=2){
        c = (2-k)+(m-2);
    }
    else{
        c=0;
    }
    printf("%d",c);

}
