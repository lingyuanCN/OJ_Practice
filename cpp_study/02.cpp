// #include <malloc.h>
#include <cstdio>
#include <cstring>

int main(){
    char *s = (char *)malloc(12 * sizeof(char));
    strcpy (s, "hello");
    printf("%s", s);
}