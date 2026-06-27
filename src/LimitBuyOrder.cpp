#include "LimitBuyOrder.h"

LimitBuyOrder::LimitBuyOrder(Client* client, Instrument* instrument, int quantity, double limitPrice)
    : LimitOrder(client, instrument, quantity, limitPrice) {}

bool LimitBuyOrder::isBuy() const {}
void LimitBuyOrder::display(std::ostream& os) const {}
