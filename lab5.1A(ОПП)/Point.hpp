#ifndef Point_hpp
#define Point_hpp

#include <iostream>
#include <string>
#include <cmath>
#include "Exception.hpp"
#include "Exception_anc.hpp"

using namespace std;

class point{
    
private:
    
    double x, y;
public:
    
    point();
    point(double, double);
    point(const point&);
    ~point();
    
    void set_x(double x);
    void set_y(double y);
    double get_x() const {return x;}
    double get_y() const {return y;}
    double distance();
    point& operator = (const point&);
    operator string() const;
    
    friend ostream& operator << (ostream&, const point&);
    friend istream& operator >> (istream&, point&);
    
    point& operator ++();
    point& operator --();
    point operator ++(int);
    point operator --(int);
    
};
#endif /* Point_hpp */
