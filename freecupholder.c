#include <fcntl.h>
#include <errno.h>
#include <linux/cdrom.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("Giving you free cup holder...\n");
	char *dev = "/dev/cdrom";
	int cdrom = open(dev,O_RDONLY | O_NONBLOCK);
	int code = ioctl(cdrom, CDROMEJECT);
	if(code == 0)
	{
		close(cdrom);
		printf("Enjoy your free cup holder!\n");
	}
	else if(code == -1 && errno == EBADF)
	{
		printf("Your computer has no cup holder!!!\n");
	}
}
