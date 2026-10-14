#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
    int fd = 0;
    char arr[] = "Infosystems Marvellous";

    fd = open("Demo.txt", O_RDWR);
    if(fd == -1) {
        printf("Unable to open\n");
        return -1;
    } else {
        printf("File gets opened with fd : %d\n", fd);
        write(fd, arr,10);
        close(fd);
    }
    return 0;
}