class NoDefault {
    public:
        NoDefault(int i): _i(i) {};
    private:
        int _i;
};

class C {
    public:
        C() = default;
    private:
        NoDefault no_def;
};
