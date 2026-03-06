#include "longint.h"

LongInt LongInt::operator=(const LongInt &li)
{
    value = li.value;
    return *this;
}

int LongInt::operator=(const int64_t &v)
{
    value = v;
    return value;
}

// dohledane jestli je char* typ ukoncen specialnim znakem
int LongInt::len(const char* str)
{
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

LongInt LongInt::operator=(const char* str)
{
    for (int i = 0; i < len(str); i++) {
          }
}
