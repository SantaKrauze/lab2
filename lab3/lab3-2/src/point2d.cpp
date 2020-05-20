#include"point2d.hpp"
#include<iostream>
#include<cmath>
#define M_PI 4*atan(1.)


//konstruktor bez argumentów zwraca punkt (0,0)
//wykorzystano konstruktor z listą inicjalizacyjną
Point2d::Point2d()
    : _x(0)
    , _y(0){
}

//konstruktor pobierający współrzędne
//wykorzystano konstruktor z listą inicjalizacyjną
Point2d::Point2d(double x, double y)
    : _x(x)
    , _y(y){
}

//konstruktor kopiujący
//wykorzystano konstruktor z listą inicjalizacyjną
Point2d::Point2d(const Point2d& other)
    : _x(other._x)
    , _y(other._y){
}

//przeciążony operator przypisania
Point2d& Point2d::operator= (const Point2d& other){
    //wykorzystano wskaźnik this pokazujący
    //na "ten" obiekt
    this->_x = other._x;
    this->_y = other._y;
    //operator zwraca "ten" obiekt, aby można było
    //wykonać wielokrotne przypisanie
    return *this;
}

//współrzędna x
double Point2d::getX(){
    return _x;
}

//współrzędna y
double Point2d::getY(){
    return _y;
}

//współrzędna r
double Point2d::getR(){
    return sqrt(_x*_x + _y*_y);
}

//współrzędna phi
double Point2d::getPhi(){
    return atan2(_y,_x);
}

void Point2d::setXY(double x, double y){
    //przypisanie z wykorzystaniem wskaźnika this oraz wprost
    _x = x;
    this->_y = y;
}

void Point2d::setRPhi(double r, double phi){
    _x = r*cos(phi);
    _y = r*sin(phi);
}

//przeciążony operator<< dla wypisywania
std::ostream& operator<<(std::ostream& out, Point2d& p){
    return out << "[" << p.getX() << ", " << p.getY() << "]";
}
