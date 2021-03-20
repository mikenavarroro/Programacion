#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__
#define SO "Linux"
#elif _WIN32
#define SO "Windows"
#endif

int main(void){
    if(SO == "Windows")
        system("cls");
    else
        system("clear");

    return EXIT_SUCCESS;
}
