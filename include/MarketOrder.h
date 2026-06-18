#pragma once
#include "Order.h"

class MarketOrder : public Order {
public:
    MarketOrder(Client* client, Instrument* instrument, int quantity);

    double getPrice() const override;
};
