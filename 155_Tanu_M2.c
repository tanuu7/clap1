#include <stdio.h>
int main() {
    int tot_minutes, hrs, mins;
    printf("Enter time in minutes: ");
    scanf("%d", &tot_minutes);
    
    hrs = (tot_minutes / 60);
    mins = (tot_minutes % 60);

    printf("%d Hours, %d Minutes. \n", hrs, mins);

    return 0;
}
