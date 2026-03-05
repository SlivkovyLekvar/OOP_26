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
