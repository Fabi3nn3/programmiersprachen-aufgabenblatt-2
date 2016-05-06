#include "rectangle.hpp"
#include <cmath>

Rectangle::Rectangle():
x_{3},
y_{4}{}

Rectangle::Rectangle(float x, float y):
x_{x},
y_{y}{}

void Rectangle::setheight(float h){
	x_=h;
}

void Rectangle::setlength(float l){
	y_=l;
}

float Rectangle::circum(){
	float c = 2*x_+2*y_ ;
	return c;
}

float Rectangle::area(){
	float a = x_*y_;
	return a;
}

/*float Rectangle::diagonal(){
	float d = sqrt(x_*x_+y_*y_);
	return d;
}*/