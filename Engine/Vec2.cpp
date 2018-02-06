#include "Vec2.h"

Vec2::Vec2(float x_in, float y_in)
	:
	x(x_in),
	y(y_in)
{

}

Vec2 Vec2::operator+(const Vec2 & rhs) const
{
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2 & Vec2::operator+=(const Vec2 & rhs)
{
	return *this = *this + rhs;

	// explains the "sexy" way above
	/*
	*this = *this + rhs;
	return *this;
	*/

	//This is the CLEAR way, but Chili showed the "sexy" way above
	/*
	x += rhs.x;
	y += rhs.y;
	return *this; // *this is a pointer to the object on which this function is operating
	*/
}

Vec2 Vec2::operator*(float rhs) const
{
	return Vec2(x * rhs, y * rhs);
}

Vec2 & Vec2::operator*=(float rhs)
{
	return *this = *this * rhs;
}

