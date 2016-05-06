#ifndef CIRCLE_HPP
#define CIRCLE_HPP
//#include "vec2.hpp"
//#include "color.hpp"

class Circle{
	public:
		Circle();
		Circle(float rad);
		//Circle(float rad, Vec2 v);
		//Circle(float rad, Color farbe);

		float rad_;
		//Vec2 v;
		//Color farbe_;

			void setradius(float r); //Set Radius
			float getradius();       // Get Radius
			float area();			  //gibt Flaeche
			float circum();		  //gibt Umkreis
			float diameter();        //gibt Durchmesser

};

#endif 