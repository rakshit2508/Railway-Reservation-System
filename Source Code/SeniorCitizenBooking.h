// Name : Rakshit Yadav
// Roll No. : 19CE36002

#ifndef TATKAL_BOOKING_H
#define TATKAL_BOOKING_H

#include "Station.h"
#include "Date.h"
#include "BookingClasses.h"
#include "ConcessionBooking.h"

class SeniorCitizenBooking : public ConcessionBooking {
public:
    SeniorCitizenBooking(Station A , Station B , Date& d1 , Date& d2 , Passenger& passenger ,const BookingClasses& bookingclass);
    float ComputeFare() const;

};

#endif // SeniorCitizen_BOOKING_H