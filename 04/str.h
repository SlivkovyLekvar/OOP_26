#include <stdio.h>
#include <string.h>

class Str {
    private:
        char* buff;
        void clear() {delete[] buff; buff = 0;};

    public:
        // implicit constructor
        Str() {buff = 0;};
        // copy constructors
        Str(const Str& s);
        Str(const char* s);

        // destructor
        ~Str() {delete[] buff;};

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
        Str operator=(char c);
        Str operator+(char c);
        Str& operator+=(char c);

        int print() const;

        bool operator==(const Str& s);
        bool operator<=(const Str& s);
        bool operator>=(const Str& s);
        bool operator!=(const Str& s);

};  