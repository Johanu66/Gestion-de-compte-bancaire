#include "transaction.h"

Transaction::Transaction(int amount, Date date, TransactionType type, std::string motive):
_amount(amount), _date(date), _type(type), _motive(motive){}


int Transaction::amount() const {
  return _amount;
}


Date Transaction::date() const {
  return _date;
}


TransactionType Transaction::type() const {
  return _type;
}


std::string Transaction::motive() const {
  return _motive;
}