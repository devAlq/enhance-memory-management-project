 #include <stdio.h>

struct Example {
     double b;    // 8 bytes
     int d;       // 4 bytes

    char a;      // 1 byte
    char c;      // 1 byte
};

int main() {
    struct Example example;

    printf("Size of struct Example: %lu bytes\n", sizeof(example));
    printf("Address of a: %p\n", &example.a);
    printf("Address of b: %p\n", &example.b);
    printf("Address of c: %p\n", &example.c);
    printf("Address of d: %p\n", &example.d);

    return 0;
}
