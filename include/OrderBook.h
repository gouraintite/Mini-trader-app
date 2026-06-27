#pragma once
#include <vector>
#include <ostream>
#include "Trade.h"

class Order;
class Instrument;

class OrderBook {
    Instrument* instrument;
    std::vector<Order*> buyOrders;   // sorted highest price first
    std::vector<Order*> sellOrders;  // sorted lowest price first

    void sortOrders();

public:
    explicit OrderBook(Instrument* instrument);
    ~OrderBook();

    Instrument* getInstrument() const;
    const std::vector<Order*>& getBuyOrders() const;
    const std::vector<Order*>& getSellOrders() const;

    void addOrder(Order* order);
    std::vector<Trade> match();

    friend std::ostream& operator<<(std::ostream& os, const OrderBook& book);
};
