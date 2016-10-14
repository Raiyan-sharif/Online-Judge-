#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main(){
    char a[500];
    char b[500];
    int c=0;
    gets(a);
    int d=strlen(a);
    for(int i=0,j=0;i<d;i++){
        if(a[i]<=90){
            a[i]=a[i]+32;
        }
        if(a[i]=='a' || a[i]=='e' || a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y'){
            continue;
        }
        b[j]=46;
        j++;
        b[j]=a[i];
        cout<<b[j-1]<<b[j];
    }
    return 0;
}
