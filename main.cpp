#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Vector v(4);
    v.push_back(5);
    v.push_back(55);
    cout << "Размер:" << ' ' << v.size() << endl;
    //v.reverse();
    //cout << "Размер:" << ' ' << v.size() << endl;
    //v.pop_back();
    //cout << "Размер:" << ' ' << v.size() << endl;
    //v.insert(5555, 0);
    //cout << "Размер:" << ' ' << v.size() << endl;
    //v.print();
    //v.empty();
    //v.clear();
}

