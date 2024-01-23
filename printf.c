#include <stdio.h>

int main(){
    int a, b ,c;
    a = 5;
    b = 8;
    c = a + b;
    printf("A soma entre %i e %i é: %i\n",a, b, c);   // a variável c é a + b.
return 0;
}

ou

#include <stdio.h>

int main() {
    int a, b ,c;
    a = 5;
    b = 8;
    c = a + b;
    printf("A soma entre %i e %i é: %i\n", a, b, a+b); // a diferença é que não usamos a variável C, o terceiro %i será substituído pela expressão a+b que também será 13.
return 0;
}
