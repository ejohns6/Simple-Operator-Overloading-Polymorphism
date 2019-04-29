#ifndef _PAIR_CPP_
#define _PAIR_CPP_

#include <iostream>
#include <sstream>
using namespace std;

#include "Pair.h"


template <class T>
Pair<T>::Pair(){

}

template <class T>
Pair<T>::Pair(T first, T second){
    m_first = first;
    m_second = second;
}

template <class T>
T Pair<T>::first(){
    return(m_first);
}//return the first member of the pair

template <class T>
T Pair<T>::second(){
    return(m_second);
}

template <class T>
bool Pair<T>::operator==(const Pair<T>& rhs) const{
    if(m_first == rhs.m_first && m_second == rhs.m_second){
        return(true);
    }else if(m_first == rhs.m_second && m_second == rhs.m_first){
        return(true);
    }else{
        return(false);
    }
}


#endif
