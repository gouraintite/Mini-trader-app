#include "MarketBuyOrder.h"

MarketBuyOrder::MarketBuyOrder(Client* client, Instrument* instrument, int quantity)
    : MarketOrder(client, instrument, quantity) {}

bool MarketBuyOrder::isBuy() const {}
