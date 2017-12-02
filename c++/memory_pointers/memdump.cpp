#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<iostream>
#include<sstream>
#include <ctype.h>
#include <errno.h>

using namespace std;
#define LED_ADDR 0x80840020

extern int errno;

void dump( const void * mem, unsigned int n ) {
    const char * p = reinterpret_cast< const char *>( mem );
    for ( unsigned int i = 0; i < n; i++ ) {
        std::cout << hex << int(p[i]) << " ";
    }
    std::cout << std::endl;
}


int main()
{
        int i;
        unsigned char *leds;
        unsigned char val;

        int fd = open("/dev/mem",O_RDWR|O_SYNC);
        if(fd < 0)
        {
                printf("Can't open /dev/mem\n");
                return 1;
        }
        printf("Page size is:%d\n", getpagesize());
         //void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
        //leds = (unsigned char *) mmap(0, getpagesize(), PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0x80840000);
        leds = (unsigned char *) mmap(0, getpagesize(), PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0x80840000);
        if( errno >0)
        {
                printf("Can't mmap. Errno: %d\n", errno);
                perror("WTF");


                switch(errno){
                    case EACCES:
                        printf("A file descriptor refers to a non-regular file.  Or a file mapping was requested, but fd is not  open  for  reading.   Or  MAP_SHARED  was  requested  and PROT_WRITE is set, but fd is not open in read/write (O_RDWR) mode.  Or PROT_WRITE is set, but the file is append-only.\n");
                        break;

                    case EAGAIN:
                        printf(" The file has been locked, or too much memory has been locked (see setrlimit(2))\n");
                        break;

                    case EBADF:
                        printf("  fd is not a valid file descriptor (and MAP_ANONYMOUS was not set)\n");
                            break;

                    case EINVAL:
                        printf(" We don't like addr, length, or offset (e.g., they are too large, or not aligned on a page boundary).\n");
                        printf("(since Linux 2.6.12) length was 0.");
                        printf("flags contained neither MAP_PRIVATE or MAP_SHARED, or contained both of these values.\n");
                        break;

                    case ENFILE:
                        printf("The system-wide limit on the total number of open files has been reached.\n");
                        break;

                    case ENODEV:
                        printf(" The underlying filesystem of the specified file does not support memory mapping.\n");
                        break;

                    case ENOMEM:
                        printf(" No memory is available.\n");
                        printf(" The  process's  maximum number of mappings would have been exceeded.  This error can also occur for munmap(2), when unmapping a region in the middle of an existing mapping, since this results in two smaller mappings on either side of the region being unmapped.\n");
                        break;

                    case EPERM:
                        printf("The prot argument asks for PROT_EXEC but the mapped area belongs to a file on a filesystem that was mounted no-exec.\n");
                        printf("The operation was prevented by a file seal; see fcntl(2).\n");
                        break;

                    case ETXTBSY:
                        printf("MAP_DENYWRITE was set but the object specified by fd is open for writing.\n");
                        break;

                    case EOVERFLOW:
                        printf("On 32-bit architecture together with the large file extension (i.e., using 64-bit off_t): the number of pages used for length plus number  of  pages  used for offset would overflow unsigned long (32 bits).\n");
                        break;
                };






                return 1;
        }
        printf("errno %d\n", errno);
/*
        for(i = 0; i < 256; i++)
        {
                val = i % 4;
                leds[0x20] = val;

                sleep(1);
        }
*/

        return errno;
}
