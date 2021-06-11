//Header file used by most example programs
#ifndef TLPI_HDR_H
#define TLPI_HDR_H //prevent accidental double inclusion

#include <sys/types.h> //type definition used by many programs
#include <stdio.h> //standard I/O functions
#include <stdlib.h> //prototypes of commonly used library functions, plus EXIT_SUCCESS and EXIT_FAILURE constants.
#include <unistd.h> //prototypes for many system calls.
#include <errno.h> //declares errno and defines error constants.
#include <string.h> //commonly used string-handling functions.

#include "get_num.h" //declares function for handling numeric arguments

#include "error_functions.h" //declares our error handling functions

typedef enum {FALSE, TRUE} Boolean;

#define min(m, n) ((m) < (n) ? (m) : (n))
#define max(m, n) ((m) > (n) ? (m) : (n))

#endif