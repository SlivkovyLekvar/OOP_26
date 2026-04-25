#include <stdio.h>
#include <string.h>

class Str {
    private:
        char* buff;
        void clear();
        void copy(const char* s);
    public:
        // implicit constructor
        Str();
        // copy constructors
        Str(const Str& s);
        Str(const char* s);

        // destructor
        ~Str();

        // assignment operator
        Str& operator=(const Str& s);
        // assignment operator for c-string
        Str& operator=(const char* s);

        // concatenation operator
        Str operator+(const Str& s);
        // concatenation operator for c-string 
        Str operator+(const char* s);

        int len() const;

        Str& operator+=(const Str& s);
        Str& operator+=(const char* s);

        Str(char c);
        Str& operator=(char c);
        Str operator+(char c);
        Str& operator+=(char c);

        int print() const;

        bool operator==(const Str& s);
        bool operator<=(const Str& s);
        bool operator>=(const Str& s);
        bool operator!=(const Str& s);

        int Delsi(const Str& s);

};  