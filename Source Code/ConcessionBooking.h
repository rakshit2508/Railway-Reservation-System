// Name : Rakshit Yadav
// Roll No. : 19CE36002

#ifndef CONCESSIONBOOKING_H
#define CONCESSIONBOOKING_H
#include <iostream>
#include "Booking.h"
using namespace std;

class ConcessionBooking : public Booking {
protected:
    ConcessionBooking(Station A , Station B , Date& d1 , Date& d2  ,const BookingClasses& bookingclass, Passenger& passenger) : Booking(A , B , d1 , d2 , bookingclass, passenger) {}
};

#endif // CONCESSIONBOOKING_H