#include <stdio.h>
using namespace std;
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--) {
        int year, month, day, hour, minute, second;
        scanf("%d/%d/%d-%d:%d:%d", &year, &month, &day, &hour, &minute, &second);

        printf("%02d/%02d/%04d-", month, day, year);
        if (hour == 0) {
            printf("%02d:%02d:%02dam", 12, minute, second);
        } else if (hour > 0 && hour < 12) {
            printf("%02d:%02d:%02dam", hour, minute, second);
        } else if (hour == 12) {
            printf("%02d:%02d:%02dpm", 12, minute, second);
        } else {
            printf("%02d:%02d:%02dpm", hour - 12, minute, second);
        }
        printf("\n");
    }
    return 0;
}