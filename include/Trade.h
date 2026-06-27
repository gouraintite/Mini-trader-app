#pragma once
#include <ctime>
#include <ostream>

class Client;
class Instrument;

class Trade {
    static int nextId;

    int tradeId;
    Client* buyer;
    Client* seller;
    Instrument* instrument;
    int quantity;
    double price;
    std::time_t timestamp;

public:
    Trade(Client* buyer, Client* seller, Instrument* instrument, int quantity, double price);

    int getTradeId() const;
    Client* getBuyer() const;
    Client* getSeller() const;
    Instrument* getInstrument() const;
    int getQuantity() const;
    double getPrice() const;
    double getVolume() const;
    std::time_t getTimestamp() const;

    friend std::ostream& operator<<(std::ostream& os, const Trade& trade);
};
