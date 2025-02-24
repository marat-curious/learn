class Date {
    public:
        Date(const unsigned int y, const unsigned int m, const unsigned int d): year(y), month(m), day(d) {};
        Date(const unsigned int y, const unsigned int m): Date(y, m, 3) {};
        Date(const unsigned int y): Date(y, 2) {};
        Date(): Date(2025) {};

        const unsigned int get_year() { return year; };
        const unsigned int get_month() { return month; };
        const unsigned int get_day() { return day; };

    private:
        const unsigned int year, month, day;
};
