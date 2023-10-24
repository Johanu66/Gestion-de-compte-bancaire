/**
* @Author: Dominique Ginhac <d0m>
* @Date:   2019-10-15T09:46:41+02:00
* @Email:  dginhac@u-bourgogne.fr
* @Project: C++ Programming - ESIREM 3A IT
* @Summary:  Methods - Helpers functions
*/
#include "date.h"
#include <assert.h> 

Date::Date(int month, int day) : _month(month), _day(day) {
    bool status = isDate(month, day);
    assert(status && "Date is not valid");
}

int Date::month() const {
    return _month;
}

int Date::day() const {
    return _day;
}

void Date::updateMonth(int month) {
    bool status = isDate(month, _day);
    assert(status==true && "New month is not valid");
    _month = month;
}

void Date::updateDay(int day) {
    bool status = isDate(_month, day);
    assert(status==true && "New day is not valid");
    _day = day;
}

void Date::next() {
    if ((_month==12) && (_day==31)) {
        _day=1;
        _month=1;
    }
    else if (_day==getDaysInMonth(_month)) {
        _day=1;
        _month++;
    }
    else {
        _day++;
    }
}

void Date::back() {
    if ((_month==1) && (_day==1)) {
        _day=31;
        _month=12;
    }
    else if (_day==1) {
        _month--;
        _day=getDaysInMonth(_month);
    }
    else {
        _day--;
    }
}


/**
    *
    * Helper functions
    *
*/

bool isDate(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||
        (month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

int getDaysInMonth(int month)  {
    assert(((month >=1) && (month<=12)) && "Month is not valid");
    if (month == 2) return 28;
    if ((month == 1 || month == 3 || month == 5 || month == 7
    || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

int dayOfYear(Date d) {
    auto day=0;
    for (auto i=1;i<d.month();i++) {
        day+=getDaysInMonth(i);
    }
    day+= d.day();
    return day;
}

std::string toString(Date d) {
    return std::to_string(d.day()) + "/" + std::to_string(d.month()) ;
}

bool operator == (const Date& d1,const Date& d2) { // check for equality
    if( (d1.day()==d2.day()) && (d1.month()==d2.month())) {
        return true;
    }
return false;
}

bool operator !=(const Date& d1, const Date& d2) {
    return !(d1==d2);
}

bool operator < (const Date& d1, const Date& d2) {

    if (d1.month()<d2.month()) {
        return true;
    }
    else if (d1.month()>d2.month()) {
        return false;
    } else { // same month
        if ( d1.day()<d2.day()) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}


bool operator > (const Date& d1, const Date& d2) {
    if (d1==d2) {
        return false;
    }
    if (d1<d2) {
        return false;
    }
    return true;
}

bool operator <=(const Date& d1, const Date& d2) {
    if (d1==d2) {
        return true;
    }
    return (d1<d2);
}

bool operator >=(const Date& d1, const Date& d2) {
    if (d1==d2) {
        return true;
    }
    return (d1>d2);
}