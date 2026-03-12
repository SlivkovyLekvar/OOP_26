#include <cstdint>

class LongInt {
    private:
    int64_t value;
    //clear
    void clear() {value = 0;};
    public:
    LongInt(int64_t v) {value = v;};
    // implicit constructor
    LongInt() {value = 0;};
    // destructor
    ~LongInt() {};
    // copy constructor
    LongInt copy(const LongInt& li) {value = li.value;};
    // assignment operator
    LongInt& operator=(const LongInt &li);
    int operator=(const int64_t &v);
    // copy constructor for char
    LongInt (const char* str);
    //asignment operator for char
    LongInt operator=(const char* str);
    //length of char
    int len(const char* str);
    // exponentiation operator
    int64_t exp(int base, int exponent);
    
    
};