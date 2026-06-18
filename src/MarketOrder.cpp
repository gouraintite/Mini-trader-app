#include "MarketOrder.h"
#include "Instrument.h"

MarketOrder::MarketOrder(Client* client, Instrument* instrument, int quantity)
    : Order(client, instrument, quantity) {}

double MarketOrder::getPrice() const {}
