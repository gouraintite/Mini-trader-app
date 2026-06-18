#include "Position.h"

Position::Position(Instrument* instrument, int quantity, double acquisitionPrice)
    : instrument(instrument), quantity(quantity), averageAcquisitionPrice(acquisitionPrice) {}

Instrument* Position::getInstrument() const {}
int Position::getQuantity() const {}
double Position::getAverageAcquisitionPrice() const {}

void Position::addShares(int qty, double price) {}
void Position::removeShares(int qty) {}

double Position::getUnrealizedPnL() const {}

std::ostream& operator<<(std::ostream& os, const Position& pos) {}
