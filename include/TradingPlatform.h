#pragma once
#include <map>
#include <vector>
#include <string>
#include "Client.h"
#include "Instrument.h"
#include "Position.h"
#include "OrderBook.h"
#include "Trade.h"

class TradingPlatform {
    std::map<std::string, Client>     clients;
    std::map<std::string, Instrument> instruments;
    std::map<std::string, OrderBook>  orderBooks;
    std::vector<Trade>                trades;

public:
    TradingPlatform() = default;

    Client&     addClient(const std::string& id, const std::string& name, double initialCash = 0.0);
    Instrument& addInstrument(const std::string& symbol, const std::string& companyName, double marketPrice);
    Client&     getClient(const std::string& id);
    Instrument& getInstrument(const std::string& symbol);

    void depositCash(const std::string& clientId, double amount);
    void addPosition(const std::string& clientId, const std::string& symbol, int quantity, double acquisitionPrice);

    void placeOrder(Order* order);

    std::vector<Trade> executeMatching(const std::string& symbol);

    void clientReport(const std::string& clientId) const;

    void tradingReport() const;
};
