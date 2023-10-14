#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/custom.h"

int main(int argc, char *argv[])
{
   // int n=0;
   // if(argc>=2) n = atoi(argv[1]);

    //    //printf("say hello to kernal %d \n",n);
     printf("\n %d \n ",sysinfo(0));
     printf("\n %d \n ",sysinfo(1));
     printf("\n %d \n",sysinfo(2));



   struct pinfo param;
   procinfo(&param); 

   printf("\n post pointer adress %d  %d  \n",&param,param.page_usage);
   //printf("\n %d \n",param.ppid) ;

    return 0;
}
