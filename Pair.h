#ifndef PAIR_H_INCLUDED
#define PAIR_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Pair{

public:
    Pair();
    Pair(T first, T second);
    T first();//return the first member of the pair
    T second();//reutrn the second member of the pair
    bool operator==(const Pair<T>& rhs) const;

private:
    T m_first;
    T m_second;


};

#include "Pair.cpp"
#endif // PAIR_H_INCLUDED

/*
#ifndef PAIR_H_INCLUDED
#define PAIR_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Pair{

public:
    Pair();
    Pair(int first, int second);
    int first();//return the first member of the pair
    int second();//reutrn the second member of the pair
    bool operator==(const Pair& rhs) const;

private:
    int m_first;
    int m_second;


};
#endif // PAIR_H_INCLUDED
*/

