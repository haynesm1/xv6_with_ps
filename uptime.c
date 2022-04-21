#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, const char *argv[])
{
    int timeSinceBootTicks = uptime();
    printf(1, "Ticks since boot: %d", timeSinceBootTicks);
    exit();
    return 0;
}