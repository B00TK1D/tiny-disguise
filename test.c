#include <unistd.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // for (int i = -20000; i < 2880; i++) {
    //     printf("%x", argv[0][i]);
    // }
    // int i = -428;
    // // Max: 2879
    // // Min: -428
    // // Alpine min: -3080
    // // Alpine max: 140
    // while (1) {
    //     printf("%d\n", i);
    //     argv[0][i] = 0;
    //     i--;
    // }
    for (int i = -3078; i < 138; i++) {
        argv[0][i] = 0;
    }
    sleep(1000);
}