#include<stdio.h>
#include<fcntl.h>
// #include<io.h>

 
 int main()
 {
    char FileNAme[20];
    int FD=0;

    printf("Enter the file name that ypou want to open:\n");
    scanf("%s",FileNAme);

    FD=open(FileNAme,O_RDWR);
    if(FD==-1)
    {
            printf("unnballe to open:\n");

    }
    else
    {
            printf("Enter the file is open %d\n",FD);

    }
    close(FD);
    return 0;
 }