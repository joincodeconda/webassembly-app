#include <stdio.h>
#include <stdlib.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int secret_number(int seed)
{
    if (seed <= 0)
    {
        return 0;
    }

    return rand() % (seed + 1);
}

EMSCRIPTEN_KEEPALIVE
int main()
{
    printf("secret_number.c main has been run\n");
    return 0;
}
