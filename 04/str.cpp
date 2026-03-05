#include "str.h"

Str::Str(const Str &s)
{
    if (s.buff) {
        buff = new char[strlen(s.buff) + 1];
        strcpy(buff, s.buff);
    } else {
        buff = 0;
    }
}

Str::Str(const char *s)
{
    buff - new char[strlen(s) + 1];
    strcpy(buff, s);
}

Str Str::operator=(const Str &s)
{
    delete[] buff;
    if (! s.len()) {
        buff = 0;
    } else {
        buff = new char[strlen(s.buff) + 1];
        strcpy(buff, s.buff);
    }
    return Str();
}

Str Str::operator=(const char *s)
{
    delete[] buff;
    if (! s) {
        buff = 0;
    } else {
        buff = new char[strlen(s) + 1];
        strcpy(buff, s);
    }
    return Str();
}

Str Str::operator+(const Str &s)
{
    return Str();
}

Str Str::operator+(const char *s)
{
    return Str();
}

int Str::len() const
{
    return buff ? strlen(buff) : 0;
}
