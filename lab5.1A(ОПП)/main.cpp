#include <iostream>
#include "Point.hpp"
int main() {
    point p;
    bool result;
    do{
    try
    {
        result = true;
        cin >> p;
    }
    catch (bad_exception e)
    {
        result = false;
        cerr << e.what() << endl;
    }
    catch (Exception_anc& e)
    {
        result = false;
        cerr << e.What() << endl;
    }
    catch (Exception* e)
    {
        result = false;
        cerr << e->What() << endl;
    }
    }while(!result);
    
    cout << "Відстань від точки до початку координат: " << p.distance() << endl;
    try
    {
    cout << p++ << endl;
    cout << p-- << endl;
    cout << ++p << endl;
    cout << --p << endl;
    }
    catch (const char* a)
    {
        cerr << a << endl;
    }
    
    return 0;
}
