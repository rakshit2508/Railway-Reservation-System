// Name : Rakshit Yadav
// Roll No. : 19CE36002

#ifndef Divyang_H
#define Divyang_H
#include <iostream>
#include "Concession.h"
using namespace std;

class Divyang : public Concession {
protected:
    Divyang(string name) : Concession(name) {}
};

#endif