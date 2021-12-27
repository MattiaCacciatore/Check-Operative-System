#ifdef _WIN32
	#include "windows_os.h" // Windows OS detected.
#elif __unix__
	#include "unix_os.h"    // Unix OS detected.
#endif

int main()
{
#ifdef _WIN32
	if(win::my_printf())
#elif __unix__
	if(unix::my_printf())
#endif
		return 0;
	else
		return -1;
}
