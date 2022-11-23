#include <stdio.h>

int main()
{
    char a = "a";
    char *b = "b";
    char c[2] = "";
    c[0] = a;
    c[1] = b;
    
    c[0] += b;
    c[1] += a;
    
    std::cout << c << std::endl;
    return 0;
}