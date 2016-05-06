#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
//#include "color.hpp"

class Rectangle{
	public:
		Rectangle();
		Rectangle(float x, float y);
		float x_;
		float y_;

			void setheight(float x);
			void setlength(float y);
			float getheight();
			float getlength();
			float circum();
			float area();
			//float diagonal();
		
};
#endif