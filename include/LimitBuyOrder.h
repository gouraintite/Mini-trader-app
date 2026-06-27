#pragma once
#include "LimitOrder.h"

class LimitBuyOrder : public LimitOrder {
public:
    LimitBuyOrder(Client* client, Instrument* instrument, int quantity, double limitPrice);

    bool isBuy() const override;
    void display(std::ostream& os) const override;
};
