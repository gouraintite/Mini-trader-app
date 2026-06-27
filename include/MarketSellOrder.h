#pragma once
#include "MarketOrder.h"

class MarketSellOrder : public MarketOrder {
public:
    MarketSellOrder(Client* client, Instrument* instrument, int quantity);

    bool isBuy() const override;
    void display(std::ostream& os) const override;
};
