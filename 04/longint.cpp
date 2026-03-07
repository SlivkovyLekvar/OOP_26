#include "longint.h"
#include <cmath>

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

LongInt::LongInt (const char* str) {
    int number = 0;
    for (int i = 0; i < len(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            number = number + (str[i] - '0') * pow(10, i);
        }
    }
    value = number;
}

LongInt LongInt::operator=(const char* str)
{
    int number = 0;
    for (int i = 0; i < len(str); i++) {
        if (str[i] >= '0' && str[i]<= '9') {
            int temp = str[i] - '0';
            number = number + temp * pow(10, i);
        }
    }
    value = number;
    return *this;
}
