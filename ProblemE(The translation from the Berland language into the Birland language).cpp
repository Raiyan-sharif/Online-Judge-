#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int d=a.size();
    int e=b.size();
    if(d!=e){
        printf("NO");
        return 0;
    }
    int f=0;
    for(int i=0,j=d-1;i<d;i++,j--){
        if(a[i]!=b[j]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
