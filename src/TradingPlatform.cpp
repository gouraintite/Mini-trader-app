#include "TradingPlatform.h"
#include "Exceptions.h"
#include "stdio.h"

// Client & Instrument management 

Client& TradingPlatform::addClient(const std::string& id, const std::string& name, double initialCash) {
    clients.emplace(id, Client(id, name, initialCash));
    printf("Client added: %s\n", clients.at(id).getName().c_str());
    return clients.at(id);
}

Instrument& TradingPlatform::addInstrument(const std::string& symbol, const std::string& companyName, double marketPrice) {
    instruments.emplace(symbol, Instrument(symbol, companyName, marketPrice));
    orderBooks.emplace(symbol, OrderBook(&instruments.at(symbol)));
    return instruments.at(symbol);
}

Client& TradingPlatform::getClient(const std::string& id) {
    auto it = clients.find(id);
    if (it == clients.end()) throw ClientNotFoundException("Client not found: " + id);
    return it->second;
}

Instrument& TradingPlatform::getInstrument(const std::string& symbol) {
    auto it = instruments.find(symbol);
    if (it == instruments.end()) throw InstrumentNotFoundException("Instrument not found: " + symbol);
    return it->second;
}

// Cash & position seeding

void TradingPlatform::depositCash(const std::string& clientId, double amount) {
    getClient(clientId).deposit(amount);
}

void TradingPlatform::addPosition(const std::string& clientId, const std::string& symbol, int quantity, double acquisitionPrice) {
    Client&     client     = getClient(clientId);
    Instrument& instrument = getInstrument(symbol);
    client.getPortfolio() += Position(&instrument, quantity, acquisitionPrice);
}

// Order placement

void TradingPlatform::placeOrder(Order* order) {}

// Matching engine

std::vector<Trade> TradingPlatform::executeMatching(const std::string& symbol) {}

// Client report

void TradingPlatform::clientReport(const std::string& clientId) const {}

// Trading report

void TradingPlatform::tradingReport() const {}
