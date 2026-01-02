#include <stdio.h>
#include <unistd.h>

int main() {
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    while (seconds > 0) {
        printf("Time remaining: %d\n", seconds);
        sleep(1);
        seconds--;
    }

    printf("Time's up!\n");
    return 0;
}