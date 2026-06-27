#include "LimitSellOrder.h"

LimitSellOrder::LimitSellOrder(Client* client, Instrument* instrument, int quantity, double limitPrice)
    : LimitOrder(client, instrument, quantity, limitPrice) {}

bool LimitSellOrder::isBuy() const {}
void LimitSellOrder::display(std::ostream& os) const {}
