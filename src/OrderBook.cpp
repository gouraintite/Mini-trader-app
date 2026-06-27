#include "OrderBook.h"
#include "Order.h"
#include "Instrument.h"
#include "Client.h"
#include "Portfolio.h"
#include "Position.h"
#include "Exceptions.h"
#include <algorithm>

OrderBook::OrderBook(Instrument* instrument)
    : instrument(instrument) {}

OrderBook::~OrderBook() {
    for (Order* o : buyOrders)  delete o;
    for (Order* o : sellOrders) delete o;
}

Instrument* OrderBook::getInstrument() const {}
const std::vector<Order*>& OrderBook::getBuyOrders() const {}
const std::vector<Order*>& OrderBook::getSellOrders() const {}

void OrderBook::addOrder(Order* order) {
    // route to correct side then sort
}

void OrderBook::sortOrders() {
    // buy side: highest price first (descending)
    std::sort(buyOrders.begin(), buyOrders.end(),
        [](Order* a, Order* b) { return a->getPrice() > b->getPrice(); });

    // sell side: lowest price first (ascending)
    std::sort(sellOrders.begin(), sellOrders.end(),
        [](Order* a, Order* b) { return a->getPrice() < b->getPrice(); });
}

std::vector<Trade> OrderBook::match() {
    std::vector<Trade> trades;
    std::vector<int> remainingBuy(buyOrders.size());
    std::vector<int> remainingSell(sellOrders.size());

    for (size_t i = 0; i < buyOrders.size(); ++i)
        remainingBuy[i] = buyOrders[i]->getQuantity();
    for (size_t i = 0; i < sellOrders.size(); ++i)
        remainingSell[i] = sellOrders[i]->getQuantity();

    size_t b = 0, s = 0;
    while (b < buyOrders.size() && s < sellOrders.size()) {
        Order* buy  = buyOrders[b];
        Order* sell = sellOrders[s];

        if (buy->getPrice() < sell->getPrice()) break;

        int qty   = std::min(remainingBuy[b], remainingSell[s]);
        double px = sell->getPrice();  // sell price is the execution price

        trades.emplace_back(buy->getClient(), sell->getClient(), instrument, qty, px);

        // update buyer: debit cash, credit shares
        buy->getClient()->debit(qty * px);
        buy->getClient()->getPortfolio() += Position(instrument, qty, px);

        // update seller: credit cash, debit shares
        sell->getClient()->credit(qty * px);
        sell->getClient()->getPortfolio() -= Position(instrument, qty, px);

        remainingBuy[b]  -= qty;
        remainingSell[s] -= qty;

        if (remainingBuy[b]  == 0) ++b;
        if (remainingSell[s] == 0) ++s;
    }

    // remove fully filled orders
    // (handled after match returns, or inline — TBD at implementation time)

    return trades;
}

std::ostream& operator<<(std::ostream& os, const OrderBook& book) {}
