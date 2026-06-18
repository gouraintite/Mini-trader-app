#include "Portfolio.h"

Portfolio::Portfolio() : realizedPnL(0.0) {}

const std::vector<Position>& Portfolio::getPositions() const {}
double Portfolio::getRealizedPnL() const {}
double Portfolio::getTotalValue() const {}

Position* Portfolio::findPosition(const std::string& symbol) {}

Portfolio& Portfolio::operator+=(const Position& pos) {}
Portfolio& Portfolio::operator-=(const Position& pos) {}

std::ostream& operator<<(std::ostream& os, const Portfolio& portfolio) {}
