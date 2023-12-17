#include <stdio.h>
#include <string.h>
#include <time.h>

int main (void) {
    time_t t = time(NULL);
    printf("%s", ctime(&t));

    return 0;
}
