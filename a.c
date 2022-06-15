#include <stdio.h>
int main(void)
{
    struct chars {
    char a;
    char b;
    char c;
};  struct chars c;
    char* p;
    c.a = 'x';
    c.b = 'y';
    c.c = '\0';
    p = (char*)&c;
    printf("%s\n", p);
    return 0;
};
