#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void sigHandler(int sig)
{
    printf("Ouch \n");
}

int main(int argc, char* argv[])
{
    int j;
    if(signal(SIGINT, sigHandler) == SIG_ERR){
        printf("Error handling signal\n");
    }

    for(j = 0; ; j++){
        printf("%d\n", j);
        sleep(3);
    }
}