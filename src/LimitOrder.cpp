#include "LimitOrder.h"

LimitOrder::LimitOrder(Client* client, Instrument* instrument, int quantity, double limitPrice)
    : Order(client, instrument, quantity), limitPrice(limitPrice) {}

double LimitOrder::getPrice() const {}
double LimitOrder::getLimitPrice() const {}
