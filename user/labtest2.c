#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/custom.h"

#define MAX_PROC 10


int main(int argc, char *argv[])
{
sched_statistics();
sched_tickets(2);
sched_statistics();


return 0;
}