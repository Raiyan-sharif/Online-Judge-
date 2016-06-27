#include<cstdio>
#include<cstdlib>
#include<cmath>

#define pi (2*acos(0.0))

int main()
{
    int t, c=0;
    unsigned long long s;
    double a, r;

    scanf("%d", &t);

    while(t--)
    {
        c++;

        scanf("%lld", &s);

        a = sqrt(s);

        r = sqrt(2) * a;

        r /= 2;

        a = pi * (r*r);

        printf("Case %d: %.3lf\n", c, a);
    }

    return 0;
}
