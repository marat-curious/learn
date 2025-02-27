#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Sales_data;
istream &read(istream &is, Sales_data &item);

struct Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend istream &read(istream&, Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);

    public:
        Sales_data(const string &s, unsigned int n, double p): bookNo(s), units_sold(n), revenue(n * p) { cout << "full params initializaton: " << s << " " << n << " " << p << endl; };
        Sales_data(): Sales_data("XXX", 0, 0.0) { cout << "default initialization" << endl; };
        Sales_data(const string &s): Sales_data(s, 0, 0.0) { cout << "only bookNo provided: " << s << endl; };
        Sales_data(istream &is): Sales_data() { cout << "istream provided version called" << endl; read(is, *this); };

        string isbn() const { return bookNo; };
        Sales_data& combine(const Sales_data&);

    private:
        inline double avg_price() const;

    private:
        string bookNo;
        unsigned int units_sold = 0;
        double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
};

inline double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " <<   item.revenue << " " << item.avg_price();
    return os;
}
