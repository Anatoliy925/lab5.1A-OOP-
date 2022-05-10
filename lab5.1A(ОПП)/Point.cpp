#include "Point.hpp"
#include <sstream>
#include <cmath>

void point::set_x(double x)
{
    if(abs(x) > 100)
        throw Exception_anc("The number is out of range");
    else
        this ->x = x;
    
}
void point::set_y(double y)
{
    if(abs(y) > 100)
        throw new Exception("The number is out of range");
    else
        this ->y = y;
    
}
double point::distance()
{
    return sqrt(x*x + y*y);
}

point::point()
{
    x = 0;
    y = 0;
}

point::point(double x, double y)
{
    if (abs(x) > 100 || abs(y) > 100)
        throw bad_exception();
    else{
        set_x(x);
        set_y(y);
    }
}

point::point(const point& p)
{
    set_x(p.x);
    set_y(p.y);
}

point::~point()
{ }

point& point::operator = (const point& p)
{
    set_x(p.x);
    set_y(p.y);
    return *this;
}

point::operator string () const
{
    stringstream ss;
    ss << "x = " << x << endl;
    ss << "y = " << y << endl;
    
    return ss.str();
}

ostream& operator << (ostream& out, const point& p)
{
      out << string(p);
      return out;
}

istream& operator >> (istream& in, point& p)
{
      double ix, iy;
      cout << "x = "; in >> ix;
      cout << "y = "; in >> iy;
      cout << endl;
      p.set_x(ix);
      p.set_y(iy);
      return in;
}

point& point::operator ++()
{
      if (abs(x+1) > 100)
          throw "Number goes out of range";
      else
          x++;
      return *this;
}

point& point::operator --()
{
    if (abs(x-1) > 100)
        throw "Number goes out of range";
    else
        x--;
    return *this;
}

point point::operator ++(int)
{
    point p(*this);
    if (abs(y+1) > 100)
        throw "Number goes out of range";
    else
        y++;
    return p;
}

point point::operator --(int)
{
    point p(*this);
    if (abs(y-1) > 100)
        throw "Number goes out of range";
    else
    y--;
    return p;
}
