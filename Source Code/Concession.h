// Name : Rakshit Yadav
// Roll No. : 19CE36002

#ifndef CONCESSION_H
#define CONCESSION_H
#include <iostream>
#include "BookingCategory.h"
using namespace std;

class Concession : public BookingCategory {
protected:
    Concession(string name) : BookingCategory(name) {}
};

#endif