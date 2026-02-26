#include "student.h"

int Student::PocetPredmetu() {
        int count = 0;
        for (int i = 0; i < MAX; i++) {
            if (predmety[i].GetPredmet() != "") {
                count++;
            }
        }
        return count;
    }