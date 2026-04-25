#include "str.h"

Str::Str(const Str &s)
{
    if (s.buff) {
        buff = new char[strlen(s.buff) + 1];
        strcpy(buff, s.buff);
    } else buff = 0;
}

Str::Str(const char *s)
{
    if (s) {
        buff = new char[strlen(s)+1];
        strcpy(buff, s);
    } else buff = 0;
}

void Str::clear() {
    delete[] buff; 
    buff = 0;
}

void Str::copy(const char* s) {
    if (!s) {
        buff = 0;
        return;
    }
    buff = new char[strlen(s)+1];
    strcpy(buff,s);
}

Str::Str() {
    buff = 0;
}

Str::~Str() {
    clear();
}


Str& Str::operator=(const Str &s)
{
    if (this == &s) return *this;
    delete[] buff;
    if (s.buff) {
        buff = new char[strlen(s.buff) + 1];
        strcpy(buff, s.buff);
    } else buff = 0;
    return *this;
}

Str& Str::operator=(const char *s)
{
    delete[] buff;
    if (! s) buff = 0;
    else {
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

Str& Str::operator=(char c) {
    delete[] buff;
    if (!c) buff = 0;
    buff = new char[2];
    buff[0] = c;
    buff[1] = '\0';
    return *this;
}

Str Str::operator+(char c) {
    Str newstr;
    int l = len();
    newstr.buff = new char[l + 2];
    if (buff) strcpy(newstr.buff, buff);
    else newstr.buff[0] = '\0';
    newstr.buff[l]=c;
    newstr.buff[l+1]='\0';
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
int Str::Delsi(const Str& s){
    int i = s.len();
    int j = len();
    if (i > j) return i;
    else return j;
}
bool Str::operator==(const Str& s){
    int i = 0;
    char a = s.buff[i];
    char b = buff[i];
    int delsi = Delsi(s);
    while (i < delsi) {
        if (a!=b) return false;
        a = s.buff[++i];
        b = buff[i];
    }
    return true;
}
bool Str::operator<=(const Str& s){
    int i = 0;
    char a = s.buff[i];
    char b = buff[i];
    int delsi = Delsi(s);
    while (i<delsi) {
        if (a < b) return false;
        a = s.buff[++i];
        b = buff[i];
    }
    return true;
}
bool Str::operator>=(const Str& s){
    int i = 0;
    char a = s.buff[i];
    char b = buff[i];
    int delsi = Delsi(s);
    while (i<delsi) {
        if (a > b) return false;
        a = s.buff[++i];
        b = buff[i];
    }
    return true;
}
bool Str::operator!=(const Str& s){
    return !(*this==s);
}

