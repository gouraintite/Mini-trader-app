# Mini Trading Platform

A console-based electronic trading platform built in C++ for the EFREI S8 final project.

---

## Features

- Create and manage clients and financial instruments
- Deposit cash and manage portfolios
- Place Market and Limit Buy/Sell orders
- Automatic order matching with partial fill support
- Trade history and P&L reporting
- Interactive menu-driven interface

---

## Project Structure

```
Mini Trading Platform/
├── include/          # Header files (.h)
├── src/              # Implementation files (.cpp) + main.cpp
├── Makefile
├── plan.md           # Architecture and implementation plan
└── README.md
```

---

## Build & Run

### Requirements

- g++ with C++17 support
- make

### Compile

```bash
make
```

### Run

```bash
./trading_platform
```

---

## C++ Concepts Demonstrated

| Concept | Where |
|---|---|
| Inheritance | `Order → MarketOrder → MarketBuyOrder`, etc. |
| Polymorphism | `Order*` pointers in `OrderBook` |
| Operator overloading | `<<`, `==`, `<`, `+=`, `-=` |
| Pointers | Order/Trade/Position → Client, Instrument |
| References | Function parameters throughout |
| Exception handling | 5 custom exceptions |
| STL containers | `std::vector`, `std::map` |
| Separate compilation | One `.h`/`.cpp` per class |

---

## Class Hierarchy

```
Order (abstract)
├── MarketOrder
│   ├── MarketBuyOrder
│   └── MarketSellOrder
└── LimitOrder
    ├── LimitBuyOrder
    └── LimitSellOrder
```

---

## Authors

EFREI S8 — C++ Final Project
