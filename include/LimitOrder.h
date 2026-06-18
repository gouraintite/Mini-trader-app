#pragma once
#include "Order.h"

class LimitOrder : public Order {
protected:
    double limitPrice;

public:
    LimitOrder(Client* client, Instrument* instrument, int quantity, double limitPrice);

    double getPrice() const override;
    double getLimitPrice() const;
};
