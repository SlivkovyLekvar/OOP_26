#include "str.h"
#include "longint.h"

int main() {

    Str s1("Hello");
    Str s2 = s1;
    LongInt li1("101");
    LongInt li2 = li1;
    LongInt li3;
    li3 = li1;
    LongInt li4;
    li4 = "9rggs10987gawret0";
    printf("l1:%lld, l2:%lld, l3:%lld, l4:%lld\n", li1.GetValue(), li2.GetValue(), li3.GetValue(), li4.GetValue());
    li2+=li1;
    printf("l2+l1: %lld\n",li2.GetValue());
    li2-="12";
    printf("li2-12: %lld\n",li2.GetValue());
    li1*=li3;
    printf("li1*li3: %lld\n",li1.GetValue());
    li4+="abd50";
    printf("li4+abd50: %lld\n", li4.GetValue());

    s2.print();
    Str s3 = "00000";
    s1+=s3;
    s1.print();
    Str s4 = "1234";

    if (s3 != s4) printf ("s3 a s4 nejsou stejne.\n");
    else printf ("s3 a s4 jsou stejne.\n");

    if (s1 >= s2) printf ("s1 je vetsi nez s2\n");
    if (s3 <= s4) printf ("s3 je mensi nez s4\n");



    return 0;
}