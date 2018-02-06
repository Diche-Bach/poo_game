#pragma once

//A two-dimensional vector class (x and y dimensions only, no z for example), thus "Vec2"

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_in, float y_in);
	Vec2 operator+(const Vec2& rhs) const; // left hand side + right hand side
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(float rhs) const;
	Vec2& operator*=(float rhs);

	float x;
	float y;
};