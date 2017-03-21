#include <stdio.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int main(int argc, char* argv[])
{
    int i, t, s1, s2, s3, survivor;
    for (i=1, scanf("%d", &t); i <= t; i++) {
        scanf("%d %d %d", &s1, &s2, &s3);
        if (MAX(s1, s2) == MAX(s1, s3))
            survivor = MAX(s2, s3);
        else if (MAX(s1, s2) == MAX(s2, s3))
            survivor = MAX(s1, s3);
        else
            survivor = MAX(s1, s2);
        printf("Case %d: %d\n", i, survivor);
    }

    return 0;
}
