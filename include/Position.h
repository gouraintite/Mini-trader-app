#pragma once
#include <ostream>
#include "Instrument.h"

class Position {
    Instrument* instrument;
    int quantity;
    double averageAcquisitionPrice;

public:
    Position(Instrument* instrument, int quantity, double acquisitionPrice);

    Instrument* getInstrument() const;
    int getQuantity() const;
    double getAverageAcquisitionPrice() const;

    void addShares(int qty, double price);
    void removeShares(int qty);

    double getUnrealizedPnL() const;

    friend std::ostream& operator<<(std::ostream& os, const Position& pos);
};
