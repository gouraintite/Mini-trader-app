#pragma once
#include <string>
#include <ostream>

class Client;
class Instrument;

class Order {
    static int nextId;

protected:
    int orderId;
    Client* client;
    Instrument* instrument;
    int quantity;

public:
    Order(Client* client, Instrument* instrument, int quantity);
    virtual ~Order() = default;

    int getOrderId() const;
    Client* getClient() const;
    Instrument* getInstrument() const;
    int getQuantity() const;
    void setQuantity(int qty);

    virtual double getPrice() const = 0;
    virtual bool isBuy() const = 0;
    virtual void display(std::ostream& os) const = 0;

    bool operator<(const Order& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Order& order);
};
