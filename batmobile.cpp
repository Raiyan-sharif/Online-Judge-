#include<cstdio>
#include<cstdlib>

int main()
{
    int Test, c=0;
    double s, t, u, v, a;

    scanf("%d", &Test);

    while(Test--)
    {
        c++;

        scanf("%lf %lf %lf", &u, &v, &t);

        if(t == 0)
        {
            printf("Case %d: 0.000\n", c);
            continue;
        }

        a = (v-u) / t;

        s = ((v*v) - (u*u)) / (2*a);

        if(s < 0)
            s = s*(-1);

        printf("Case %d: %.3lf\n", c, s);
    }

    return 0;
}
