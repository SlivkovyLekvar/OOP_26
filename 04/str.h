#include <stdio.h>
#include <string.h>

class Str {
    private:
        char* buff;

    public:
        // implicit constructor
        Str() {buff = 0;};
        // explicit constructors
        Str(const Str& s);
        // copy constructor
        Str(const char* s);

        // destructor
        ~Str() {delete[] buff;};

        // assignment operator
        Str operator=(const Str& s);
        // assignment operator for c-string
        Str operator=(const char* s);
        // concatenation operator
        Str operator+(const Str& s);
        // concatenation operator for c-string 
        Str operator+(const char* s);

};  