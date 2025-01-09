#include <iostream>
#include <array>
#include <vector>

// class Matrix if rows and columns known at compilation time
// template <typename T, int Rows, int Columns>
// class Matrix {
// private:
//     std::array<std::array<T, Columns>, Rows> data;
// }

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;

    void MakeRectangle() {
        size_t maxSize = 0;

        for (const auto& row : data) {
            if (row.size() > maxSize) {
                maxSize = row.size();
            }
        }

        for (auto& row : data) {
            row.resize(maxSize);
        }
    }
public:
    Matrix(const std::vector<std::vector<T>>& d): data(d) {
        MakeRectangle();
    }

    Matrix(size_t rows, size_t columns) {
        data.resize(rows);
        for (auto& row : data) {
            row.resize(columns);
        }
    }

    size_t GetRows() const {
        return data.size();
    }

    size_t GetColumns() const {
        if (data.empty()) {
            return 0;
        }
        return data[0].size();
    }

    const std::vector<T>& operator [] (size_t i) const {
        return data[i];
    }

    std::vector<T>& operator [] (size_t i) {
        return data[i];
    }

    const T& operator () (size_t i, size_t j) const {
        return data[i][j];
    }

    T& operator () (size_t i, size_t j) {
        return data[i][j];
    }

    using const_iterator = typename std::vector<std::vector<T>>::const_iterator;
    // or
    // using const_iterator = decltype(data.cbegin());

    const_iterator begin() const {
        return data.cbegin();
    }

    const_iterator end() const {
        return data.cend();
    }
};

template <typename T>
std::ostream& operator << (std::ostream& out, const Matrix<T>& matrix) {
    const size_t rows = matrix.GetRows();
    const size_t columns = matrix.GetColumns();
    for (size_t i = 0; i != rows; ++i) {
        for (size_t j = 0; j != columns; ++j) {
            if (j > 0) {
                out << "\t";
            }
            out << matrix[i][j];
        }
        out << "\n";
    }
    return out;
}

template <typename T>
std::istream& operator >> (std::istream& in, Matrix<T>& matrix) {
    const size_t rows = matrix.GetRows();
    const size_t columns = matrix.GetColumns();
    for (size_t i = 0; i != rows; ++i) {
        for (size_t j = 0; j != columns; ++j) {
            in >> matrix(i, j);
        }
    }
    return in;
}

int main() {
    // Matrix<int, 3, 4> m; // maxtrix: 3 x 4

    // Matrix<int> m({
    //     {1, 2, 3},
    //     {4, 5, 6}
    // });

    Matrix<double> m(2, 3);
    std::cin >> m;

    std::cout << m << "\n";

    // std::cout << m.GetRows() << "\n";
    // std::cout << m.GetColumns() << "\n";

    return 0;
}
