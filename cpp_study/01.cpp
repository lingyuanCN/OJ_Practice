#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>

int main(){
    char s1[10] = "hello";
    printf("%s\n", s1);

    double x = M_PI;
    printf("%lf %lf %lf\n", x, sqrt(x), sin(x));

    puts(s1);
    printf("%s\n", s1);
    char s2[2];
    strcpy(s2, "world");
    puts(s2);
    strcat(s2, "!");
    printf("%s\n", s2);
    printf("%lu %lu\n", strlen(s1), strlen(s2));
    printf("%s %s\n", s1, s2);

    char *s3 = (char *)malloc(12 * sizeof(char));
    strcpy (s3, "hello world!");
    printf("%s", s3);

    return 0;
}