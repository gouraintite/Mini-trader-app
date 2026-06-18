#include "Instrument.h"

Instrument::Instrument(const std::string& symbol, const std::string& companyName, double marketPrice)
    : symbol(symbol), companyName(companyName), marketPrice(marketPrice) {}

const std::string& Instrument::getSymbol() const {}
const std::string& Instrument::getCompanyName() const {}
double Instrument::getMarketPrice() const {}
void Instrument::setMarketPrice(double price) {}

bool Instrument::operator==(const Instrument& other) const {}
bool Instrument::operator<(const Instrument& other) const {}
std::ostream& operator<<(std::ostream& os, const Instrument& inst) {}
