// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: trade.fbe
// Version: 1.4.0.0

#include "trade.h"

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065) // C4065: switch statement contains 'default' but no 'case' labels
#pragma warning(disable:4100) // C4100: 'identifier' : unreferenced formal parameter
#pragma warning(disable:4702) // C4702: unreachable code
#endif

namespace trade {

Order::Order()
    : id((int32_t)0ll)
    , symbol()
    , side()
    , type()
    , price((double)0.0)
    , volume((double)0.0)
{}

Order::Order(int32_t arg_id, const std::string& arg_symbol, const ::trade::OrderSide& arg_side, const ::trade::OrderType& arg_type, double arg_price, double arg_volume)
    : id(arg_id)
    , symbol(arg_symbol)
    , side(arg_side)
    , type(arg_type)
    , price(arg_price)
    , volume(arg_volume)
{}

bool Order::operator==(const Order& other) const noexcept
{
    return (
        (id == other.id)
        );
}

bool Order::operator<(const Order& other) const noexcept
{
    if (id < other.id)
        return true;
    if (other.id < id)
        return false;
    return false;
}

void Order::swap(Order& other) noexcept
{
    using std::swap;
    swap(id, other.id);
    swap(symbol, other.symbol);
    swap(side, other.side);
    swap(type, other.type);
    swap(price, other.price);
    swap(volume, other.volume);
}

Balance::Balance()
    : currency()
    , amount((double)0.0)
{}

Balance::Balance(const std::string& arg_currency, double arg_amount)
    : currency(arg_currency)
    , amount(arg_amount)
{}

bool Balance::operator==(const Balance& other) const noexcept
{
    return (
        (currency == other.currency)
        );
}

bool Balance::operator<(const Balance& other) const noexcept
{
    if (currency < other.currency)
        return true;
    if (other.currency < currency)
        return false;
    return false;
}

void Balance::swap(Balance& other) noexcept
{
    using std::swap;
    swap(currency, other.currency);
    swap(amount, other.amount);
}

Account::Account()
    : id((int32_t)0ll)
    , name()
    , wallet()
    , orders()
{}

Account::Account(int32_t arg_id, const std::string& arg_name, const ::trade::Balance& arg_wallet, const std::vector<::trade::Order>& arg_orders)
    : id(arg_id)
    , name(arg_name)
    , wallet(arg_wallet)
    , orders(arg_orders)
{}

bool Account::operator==(const Account& other) const noexcept
{
    return (
        (id == other.id)
        );
}

bool Account::operator<(const Account& other) const noexcept
{
    if (id < other.id)
        return true;
    if (other.id < id)
        return false;
    return false;
}

void Account::swap(Account& other) noexcept
{
    using std::swap;
    swap(id, other.id);
    swap(name, other.name);
    swap(wallet, other.wallet);
    swap(orders, other.orders);
}

} // namespace trade

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
