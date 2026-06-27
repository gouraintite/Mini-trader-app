#pragma once
#include "LimitOrder.h"

class LimitSellOrder : public LimitOrder {
public:
    LimitSellOrder(Client* client, Instrument* instrument, int quantity, double limitPrice);

    bool isBuy() const override;
    void display(std::ostream& os) const override;
};
