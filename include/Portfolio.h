#pragma once
#include <vector>
#include <ostream>
#include "Position.h"

class Portfolio {
    std::vector<Position> positions;
    double realizedPnL;

public:
    Portfolio();

    const std::vector<Position>& getPositions() const;
    double getRealizedPnL() const;
    double getTotalValue() const;

    Position* findPosition(const std::string& symbol);

    Portfolio& operator+=(const Position& pos);
    Portfolio& operator-=(const Position& pos);

    friend std::ostream& operator<<(std::ostream& os, const Portfolio& portfolio);
};
