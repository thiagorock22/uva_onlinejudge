#include <stdio.h>

struct coord {
    int x;
    int y;
};

char* get_residence(struct coord division, struct coord residence);  

int main (int argc, char * argv[])
{
    int k;
    struct coord division;
    struct coord residence;

    while (scanf("%d", &k) && k) {
        scanf("%d %d", &(division.x), &(division.y));

        while (k--) {
            scanf("%d %d", &(residence.x), &(residence.y));
            printf("%s\n", get_residence(division, residence));
        }
    }

    return 0;
}

char* get_residence(struct coord division, struct coord residence)
{
    if (division.x == residence.x || division.y == residence.y)
        return "divisa";

    if (residence.x > division.x && residence.y > division.y)
        return "NE";

    if (residence.x > division.x && residence.y < division.y)
        return "SE";

    if (residence.x < division.x && residence.y > division.y)
        return "NO";

    if (residence.x < division.x && residence.y < division.y)
        return "SO";
}
