#pragma once
#include <stdexcept>
#include <string>

class InsufficientFundsException : public std::runtime_error {
public:
    explicit InsufficientFundsException(const std::string& detail);
};

class InsufficientSharesException : public std::runtime_error {
public:
    explicit InsufficientSharesException(const std::string& detail);
};

class InvalidOrderException : public std::runtime_error {
public:
    explicit InvalidOrderException(const std::string& detail);
};

class ClientNotFoundException : public std::runtime_error {
public:
    explicit ClientNotFoundException(const std::string& detail);
};

class InstrumentNotFoundException : public std::runtime_error {
public:
    explicit InstrumentNotFoundException(const std::string& detail);
};
