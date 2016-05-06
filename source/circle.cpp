//#include "mat2.hpp"
//#include "vec2.hpp"
#include "circle.hpp"
//#include "color.hpp"
#include <cmath>
#define M_PI   3.14159265358979323846 


Circle::Circle():
rad_{50} {}
//v_{25,35} {}

Circle::Circle(float rad):
rad_{rad}{}

//Circle::Circle(float rad, Color farbe):
//rad_{rad},
//farbe_{farbe} {}

void Circle::setradius(float r){
	rad_=r;
}

float Circle::getradius(){
	return rad_;
}
float Circle::area(){
	float a = M_PI*rad_*rad_;
	return a;
}

float Circle::circum(){
	float u = 2*M_PI*rad_;
	return u;
}

float Circle::diameter(){
	float d = 2*rad_;
	return d;
}


//Berechnung fuer Radius, Flaeche, Umkreis, Durchmesser
//Berechnung Rectangle x,y Vektor; sethigh, setwidth; gethigh, getwith, Umfang, flache

	