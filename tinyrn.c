/*
    Tiny PID Renamer
    Author: B00TK1D
    Modify the name of the current process to a null string
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    // while (argv[0][0] != 0) {
    //     argv[0][0] = 0;
    //     argv[0]++;
    // }
    // Replace the current process with a new process
    execve("/bin/sh", NULL, NULL);
}