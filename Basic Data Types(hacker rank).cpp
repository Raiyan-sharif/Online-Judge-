#include <cstdio>

int main() {
    int a;
    scanf("%d",&a);
    getchar();
    long b;
    scanf("%ld",&b);
    getchar();
    long long c;
    scanf("%lld",&c);
    getchar();
    char d;
    scanf("%c",&d);
    getchar();
    float e;
    scanf("%f",&e);
    getchar();
    double f;
    scanf("%lf",&f);
    getchar();
    printf("%d\n%ld\n%lld\n",a,b,c);
    printf("%c\n%f\n",d,e);
    printf("%lf",f);
    return 0;

}

