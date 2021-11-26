#pragma once
#include <iostream>

class Coordinates {
private:
    double _x;
    double _y;

public:
    Coordinates();
    ~Coordinates();
    Coordinates(double, double);
    Coordinates(const Coordinates&);
    Coordinates& operator = (const Coordinates&);
    friend std::ostream& operator<<(std::ostream&, const Coordinates&);
    double get_x() const;
    double get_y() const;
    void set_x(double);
    void set_y(double);
};
