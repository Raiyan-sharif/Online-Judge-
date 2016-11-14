#include<cstdio>
int main(){
    int input[6][6];
    int maximum=-65;
    int temp;
    for(int i=0;i<6;i++){
       for(int j=0;j<6;j++){

          scanf("%d",&input[i][j]);
       }
    }
    for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
          temp = input[i][j]+input[i][j+1]+input[i][j+2]+input[i+1][j+1]+input[i+2][j]+input[i+2][j+1]+input[i+2][j+2];

              if(temp>maximum){
                maximum = temp;
              }
              else{

              }
       }
    }
    printf("%d",maximum);

    return 0;
}
