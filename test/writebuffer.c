#include <unistd.h>

void _write_buffer()
{
	return (write(1, &c, 1));
}
