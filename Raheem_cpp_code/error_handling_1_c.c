#include <errno.h>
#include <stdio.h>
#include <string.h>

//https://www.geeksforgeeks.org/error-handling-in-c/

int main()
{
    // If a file is opened which does not exist,
    // then it will be an error and corresponding
    // errno value will be set
    FILE* fp;

    // opening a file which does not exist
    fp = fopen("GeeksForGeeks.txt", "r");

    printf("Value of errno: %d\n", errno);
    perror("Message from perror");
    printf("The error message is : %s\n", strerror(errno));

    return 0;
}
