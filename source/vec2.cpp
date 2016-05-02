#include "vec2.hpp"

Vec2::Vec2(): //Standartkonstruktor, mit 0 initialisiert
x{0},
y{0} {} //weil {} leer, kein Destruktor benoetigt

Vec2::Vec2(float d, float e): //Konstruktor mit uebergabe Parameter

x{d},
y{e} {}

Vec2& Vec2::operator+=(Vec2 const& v){
	x += v.x ;
	y += v.y ;

	return *this;

}

Vec2& Vec2::operator-=(Vec2 const& v){
	x -= v.x ;
	y -= v.y ;

	return *this;
}

Vec2& Vec2::operator*=(float v){
	x *= v ;
	y *= v ;

	return *this;
}

Vec2& Vec2::operator/(float v){
	x /= v ; 
	y /= v ;
}