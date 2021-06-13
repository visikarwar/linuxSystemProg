#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sigHandler(int sig){
    static int count = 0;

    if(sig == SIGINT){
        count++;
        printf("Caught SigInt %d\n", count);
        return;
    }

    printf("Caught SIGQUIT bye.. \n");
    exit(0);
}

void main(int argc, char* argv[]){
    //establish some handler for SIGINT and SIGQUIT

    if(signal(SIGINT, sigHandler) == SIG_ERR){
        printf("Error while adding handler");
    }
    if(signal(SIGQUIT, sigHandler) == SIG_ERR){
        printf("Error while adding SIGQUIT handler");
    }

    for(; ;){
        pause();
    }
}