#include "Trade.h"
#include "Client.h"
#include "Instrument.h"

int Trade::nextId = 1;

Trade::Trade(Client* buyer, Client* seller, Instrument* instrument, int quantity, double price)
    : tradeId(nextId++), buyer(buyer), seller(seller),
      instrument(instrument), quantity(quantity), price(price),
      timestamp(std::time(nullptr)) {}

int Trade::getTradeId() const {}
Client* Trade::getBuyer() const {}
Client* Trade::getSeller() const {}
Instrument* Trade::getInstrument() const {}
int Trade::getQuantity() const {}
double Trade::getPrice() const {}
double Trade::getVolume() const {}       // quantity * price
std::time_t Trade::getTimestamp() const {}

std::ostream& operator<<(std::ostream& os, const Trade& trade) {}
