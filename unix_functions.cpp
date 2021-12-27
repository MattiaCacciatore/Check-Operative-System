// Unix functions.
#include "unix_os.h"

int unix::my_printf(void){
    const int fd_file_out = open("test.txt", O_WRONLY);
    // Open or create a text file named "test".
    if(fd_file_out < 0){
	perror("Open failed");
	return -1;
    }
    // Redirect the standard output on file.
    if(dup2(fd_file_out, STDOUT_FILENO) < 0){
	perror("Dup2 failed");
	return -1;
    }
    // Close the file descriptor.
    if(close(fd_file_out) < 0){
	perror("Close failed");
	return -1;
    }
	
   printf("OS UNIX DETECTED.\n"); // On stdout --> test.txt
   return 0;
}
