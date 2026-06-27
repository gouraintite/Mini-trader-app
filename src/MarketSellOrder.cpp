#include "MarketSellOrder.h"

MarketSellOrder::MarketSellOrder(Client* client, Instrument* instrument, int quantity)
    : MarketOrder(client, instrument, quantity) {}

bool MarketSellOrder::isBuy() const {}
void MarketSellOrder::display(std::ostream& os) const {}
