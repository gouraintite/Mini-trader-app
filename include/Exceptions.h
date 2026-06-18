#pragma once
#include <stdexcept>
#include <string>

class InsufficientFundsException : public std::exception {
    std::string msg;
public:
    explicit InsufficientFundsException(const std::string& detail);
    const char* what() const noexcept override;
};

class InsufficientSharesException : public std::exception {
    std::string msg;
public:
    explicit InsufficientSharesException(const std::string& detail);
    const char* what() const noexcept override;
};

class InvalidOrderException : public std::exception {
    std::string msg;
public:
    explicit InvalidOrderException(const std::string& detail);
    const char* what() const noexcept override;
};

class ClientNotFoundException : public std::exception {
    std::string msg;
public:
    explicit ClientNotFoundException(const std::string& detail);
    const char* what() const noexcept override;
};

class InstrumentNotFoundException : public std::exception {
    std::string msg;
public:
    explicit InstrumentNotFoundException(const std::string& detail);
    const char* what() const noexcept override;
};
