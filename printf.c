#include <stdio.h>

int main(){
    int a, b ,c;
    a = 5;
    b = 8;
    c = a + b;
    printf("A soma entre %i e %i �: %i\n",a, b, c);   // a vari�vel c � a + b.
return 0;
}

ou

#include <stdio.h>

int main() {
    int a, b ,c;
    a = 5;
    b = 8;
    c = a + b;
    printf("A soma entre %i e %i �: %i\n", a, b, a+b); // a diferen�a � que n�o usamos a vari�vel C, o terceiro %i ser� substitu�do pela express�o a+b que tamb�m ser� 13.
return 0;
}
