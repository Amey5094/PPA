#include <stdio.h>
#include <unistd.h> // universal standard
#include <fcntl.h>  /// file control

int main()
{
    int fd = 0; /// file descriptor
    fd = open("Hello.txt", O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File gets Open with fd: %d\n",fd);
        close(fd);
    }
    return 0;
}