#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd = 0;          //file descriptor(fd)

printf("Enter the file name that you want to open\n");
scanf("%s",fname);

fd = open(fname , O_RDWR);
if(fd == -1)
{
    printf("unable to open file \n");
}
else
{
    printf("File is succesfully opened with fd : %d \n",fd);
}

return 0;

}