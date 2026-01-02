#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        time_t t;
        time(&t);
        struct tm *local = localtime(&t);

        printf("\rCurrent Time: %02d:%02d:%02d", local->tm_hour, local->tm_min, local->tm_sec);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}