#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd = 0;          //file descriptor(fd)

printf("Enter the file name that you want to creat\n");
scanf("%s",fname);

fd = creat(fname , 0777);
if(fd == -1)
{
    printf("unable to create file \n");
}
else
{
    printf("File is succesfully created with fd : %d \n",fd);
}

return 0;

}