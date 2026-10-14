#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
    int fd = 0;
    char arr[] = " Infosystems";

    fd = open("Demo.txt", O_RDWR | O_APPEND);
    if(fd == -1) {
        printf("Unable to open\n");
        return -1;
    } else {
        printf("File gets opened with fd : %d\n", fd);
        write(fd, arr,12);
        close(fd);
    }
    return 0;
}