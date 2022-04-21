#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, const char *argv[])
{
    if(2 != argc)
    {
        printf(1, "Usage: sleep <number of hundredths of second>\n");
    }
    int periodHundrethsSec = atoi(argv[1]);
    sleep(periodHundrethsSec);
    exit();
    return 0;
}