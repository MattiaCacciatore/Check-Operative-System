// Windows functions.
#include "windows_os.h"

const int win::my_printf(void){
   if(freopen("test.txt","w",stdout) != NULL){
      printf("OS WINDOWS DETECTED.\n");
      return 0;
   }
   return -1;
}
