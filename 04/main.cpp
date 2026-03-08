#include "str.h"
#include "longint.h"

int main() {
    printf("Hello world!\n");
    Str s1("Hello");
    Str s2 = s1;
    printf("%s\n", s2);
    LongInt li1("123456789=123456789");
    LongInt li2 = li1;
    LongInt li3;
    li3 = li1;
    LongInt li4;
    li4 = "9rggs10987gawret0";
    // %lld will not print LongInt correctly, it is printed inside the implementation as int64_t
    return 0;
}