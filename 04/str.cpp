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
    buff = new char[strlen(s) + 1];
    strcpy(buff, s);
}

Str& Str::operator=(const Str &s)
{
    delete[] buff;
    if (! s.len()) {
        buff = 0;
    } else {
        buff = new char[strlen(s.buff) + 1];
        strcpy(buff, s.buff);
    }
    return *this;
}

Str& Str::operator=(const char *s)
{
    delete[] buff;
    if (! s) {
        buff = 0;
    } else {
        buff = new char[strlen(s) + 1];
        strcpy(buff, s);
    }
    return *this;
}

Str Str::operator+(const Str &s)
{
    Str newstr;
    newstr.buff = new char[len() + s.len() + 1];
    strcpy(newstr.buff, buff);
    strcat(newstr.buff, s.buff);
    return newstr;
}

Str Str::operator+(const char *s)
{
    Str newstr;
    newstr.buff = new char[len() + strlen(s) + 1];
    strcpy(newstr.buff, buff);
    strcat(newstr.buff, s);
    return newstr;
}

int Str::len() const
{
    return buff ? strlen(buff) : 0;
}

Str& Str::operator+=(const Str& s) {
    *this = *this + s;
    return *this;
}

Str& Str::operator+=(const char* s) {
    *this = *this + s;
    return *this;
}

Str::Str(char c) {
    buff = new char[2];
    buff[0] = c;
    buff[1] = '\0';
}

Str Str::operator=(char c) {
    delete[] buff;
    if (!c) buff = 0;
    buff = new char[2];
    buff[0] = c;
    buff[1] = '\0';
    return *this;
}

Str Str::operator+(char c) {
    Str newstr;
    newstr.buff = new char[len()+2];
    strcpy(newstr.buff, buff);
    newstr.buff[len()+1]=c;
    newstr.buff[len()+2]='\0';
    return newstr;
}

Str& Str::operator+=(char c) {
    *this = *this + c;
    return *this;
}

int Str::print() const {
    if (len()==0) printf("Nothing to print");
    for (int i = 0; i < len(); i++) {
        printf("%c",buff[i]);
    }
    return 0;
}

