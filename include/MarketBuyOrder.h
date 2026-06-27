#pragma once
#include "MarketOrder.h"

class MarketBuyOrder : public MarketOrder {
public:
    MarketBuyOrder(Client* client, Instrument* instrument, int quantity);

    bool isBuy() const override;
    void display(std::ostream& os) const override;
};
