#pragma once
#include <string>
#include <ostream>
#include "Portfolio.h"

class Client {
    int id;
    std::string name;
    double cashBalance;
    Portfolio portfolio;

public:
    Client(int id, const std::string& name, double initialCash = 0.0);

    int getId() const;
    const std::string& getName() const;
    double getCashBalance() const;
    Portfolio& getPortfolio();
    const Portfolio& getPortfolio() const;

    void deposit(double amount);
    void debit(double amount);
    void credit(double amount);

    double getTotalAccountValue() const;

    bool operator==(const Client& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Client& client);
};
