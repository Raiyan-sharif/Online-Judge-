#include<cstdio>
#include<cstring>
#include<string>

int main(){
    char a[100];
    int z=0,o=0,f=0;
    fgets(a,100,stdin);
    //puts(a);

    for(int i=0;i<=strlen(a);i++){
        if(a[i]=='1'){
            o++;
            z=0;
        }
        else if(a[i]=='0'){
            z++;
            o=0;
        }
        if(o>=7){
            f=1;
        }
        if(z>=7){
            f=1;
        }

    }
    if(f==1){
        printf("YES");
    }
    else{
        printf("NO");
    }


return 0;
}
