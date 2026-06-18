#include "Client.h"
#include "Exceptions.h"

Client::Client(int id, const std::string& name, double initialCash)
    : id(id), name(name), cashBalance(initialCash) {}

int Client::getId() const {}
const std::string& Client::getName() const {}
double Client::getCashBalance() const {}
Portfolio& Client::getPortfolio() {}
const Portfolio& Client::getPortfolio() const {}

void Client::deposit(double amount) {}
void Client::debit(double amount) {}   // throws InsufficientFundsException
void Client::credit(double amount) {}

double Client::getTotalAccountValue() const {}

bool Client::operator==(const Client& other) const {}
std::ostream& operator<<(std::ostream& os, const Client& client) {}
