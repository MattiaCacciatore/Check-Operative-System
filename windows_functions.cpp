/* Windows functions. */
#include "windows_os.h"

const int win::my_printf(void)
{
	freopen("test.txt","w",stdout);
	printf("OS WINDOWS DETECTED.\n");
	return 0;
}
