#include<cstdio>
#include<cstdlib>

int main()
{
    unsigned long long t, a, s, c=0;

    scanf("%lld", &t);

    while(t--)
    {
        c++;

        scanf("%lld", &a);

        if(a < 10)
            {
                if(a%2 == 0)
                    printf("Test %lld: feven\n", c);

                else
                    printf("Test %lld: fodd\n", c);
            }

        else
        {
            while(!(a < 10))
            {
                s = 0;
                while(a)
                {
                    s += (a%10);
                    a = a/10;
                }
                a = s;
            }

            if(a%2 == 0)
                printf("Test %lld: feven\n", c);

            else
                printf("Test %lld: fodd\n", c);
        }
    }

    return 0;
}
