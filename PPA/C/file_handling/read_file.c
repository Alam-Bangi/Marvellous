#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
    int fd = 0;
    char arr[22] = {'\0'};

    fd = open("Demo.txt", O_RDONLY);
    if(fd == -1) {
        printf("Unable to open\n");
        return -1;
    } else {
        printf("File gets opened with fd : %d\n", fd);

        read(fd, arr, 13);
        printf("Data from file is: %s\n", arr);
        close(fd);
    }
    return 0;
}