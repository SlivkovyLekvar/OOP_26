#include "str.h"
#include "longint.h"

int main() {

    Str s1("Hello ");
    Str s2 = s1;
    LongInt li1("123456789=123456789");
    LongInt li2 = li1;
    LongInt li3;
    li3 = li1;
    LongInt li4;
    li4 = "9rggs10987gawret0";
    // %lld will not print LongInt correctly, it is printed inside the implementation as int64_t
    s2.print();
    Str s3 = "world";
    s1+=s3;
    s1.print();

    return 0;
}