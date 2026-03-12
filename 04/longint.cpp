#include "longint.h"
#include <cstdio>

LongInt& LongInt::operator=(const LongInt &li)
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

int64_t LongInt::exp(int base, int exponent)
{
    int64_t result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

LongInt::LongInt (const char* str) 
{
    int64_t number = 0;
    for (int i = 0; i < len(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int64_t exponent = exp(10, len(str) - 1 - i);
            number = number + (str[i] - '0') * exponent;
        }
        else {
            number = number / 10;
        }
    }
    printf("number copy : %lld\n", number);
    value = number;
}

LongInt LongInt::operator=(const char* str)
{
    int64_t number = 0;
    for (int i = 0; i < len(str); i++) {
        if (str[i] >= '0' && str[i]<= '9') {
            int temp = str[i] - '0';
            double exponent = len(str) - 1 - i;
            number = number + temp * exp(10, exponent);
        } else {
            number = number / 10;
        }
    }
    printf("number = : %lld\n", number);
    value = number;
    return *this;
}


