#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int i,j=0;


    scanf("%d%d",&i,&j);
    //printf("%d",i);
    char d[i];
    getchar();
    fgets(d,i+1,stdin);
    while(j--){
    for(int k=0;k<i-1;k++){
     if(d[k]=='B' && d[k+1]=='G'){
        d[k+1]='B';
        d[k]='G';
        k++;
     }
    }
    }
    puts(d);

    return 0;
}
