#include "str.h"
#include "longint.h"

int main() {

    Str s1("Hello");
    Str s2 = s1;
    LongInt li1("123456789=123456789");
    LongInt li2 = li1;
    LongInt li3;
    li3 = li1;
    LongInt li4;
    li4 = "9rggs10987gawret0";
    // %lld will not print LongInt correctly, it is printed inside the implementation as int64_t
    s2.print();
    Str s3 = "00000";
    s1+=s3;
    s1.print();
    Str s4 = "1234";

    if (s3 != s4) printf ("s1 a s2 nejsou stejne.\n");
    else printf ("s1 a s2 jsou stejne.\n");

    if (s1 >= s2) printf ("s1 je vetsi s2\n");
    if (s3 <= s4) printf ("s3 je mensi s4\n");

    return 0;
}