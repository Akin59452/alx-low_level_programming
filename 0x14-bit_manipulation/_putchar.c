#include <stdio.h>
#include <main.h>

int main() {
unsigned int a = 0x0A;
unsigned int b = 0x05;

unsigned int c = a & b;
unsigned int d = a | b;
unsigned int e = a ^ b;
unsigned int f = ~a;
unsigned int g = a << 2;

printf("%x\n", c);
printf("%x\n", d);
printf("%x\n", e);
printf("%x\n", f);
printf("%x\n", g);

return 0;
}
