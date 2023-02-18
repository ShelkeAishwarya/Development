#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd = 0;          //file descriptor(fd)
    char Data[11];
    
printf("Enter the file name that you want to open\n");
scanf("%s",fname);

fd = open(fname , O_RDWR);
if(fd == -1)
{
    printf("unable to open file \n");
    return -1;
}
else
{
    printf("File is succesfully opened with fd : %d \n",fd);
}

lseek(fd,4,0);
//lseek(fd,-7,2);
//1:File decsriptor fd
//2:Displacement   
//3: from where   (0: Start of file , 1: Current position , 2:End of file)
read(fd,Data,6);
//printf("Data form file is : %6s \n",Data);
write(1,Data,6);

close(fd);
return 0;

}