#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "date.h"
#include "transactionType.h"

class Transaction{
  public:
    Transaction(int amount, Date date, TransactionType type, std::string motive);
    int amount() const;
    Date date() const;
    TransactionType type() const;
    std::string motive() const;
  private:
    int _amount;
    Date _date;
    TransactionType _type;
    std::string _motive;
};

#endif