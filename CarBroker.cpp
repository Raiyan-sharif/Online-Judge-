#include<cstdio>
#include<cstdlib>
#include<cstring>

int main()
{
    long long t, a, b, s, l;
    char arr[15], ar[15];

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%s", &arr[15]);
        scanf("%lld", &a);
        scanf("%s", &ar[15]);
        scanf("%lld", &b);

        s = a-b;

        printf("%d\n", s);
    }

    system("pause");

    return 0;
}
