#include "Order.h"
#include "Client.h"
#include "Instrument.h"

int Order::nextId = 1;

Order::Order(Client* client, Instrument* instrument, int quantity)
    : orderId(nextId++), client(client), instrument(instrument), quantity(quantity) {}

int Order::getOrderId() const {}
Client* Order::getClient() const {}
Instrument* Order::getInstrument() const {}
int Order::getQuantity() const {}
void Order::setQuantity(int qty) {}

bool Order::operator<(const Order& other) const {}

std::ostream& operator<<(std::ostream& os, const Order& order) {}
