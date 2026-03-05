#include <stdint.h>
#include <stdio.h>

class LongInt {
    private:
        int64_t value;
    public:
    // implicit constructor
    LongInt() {value = 0;};
    // destructor
    ~LongInt() {};
    // copy constructor
    LongInt (const LongInt& li) {value = li.value;};
    // assignment operator
    LongInt operator=(const LongInt &li);
    int operator=(const int64_t &v);
};