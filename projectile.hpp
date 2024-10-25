#pragma once

template <typename T>
class Projectile
{
public:
	Projectile(float speed, T damage, float position[2], float direction[2]);
	
	float getPosition(bool coordonate);
	
	void ispiercing(bool b);
	void setSizeDamage(float size);
	void move();

private:
	float speed; /// 2.5f
	T damage; /// int arrow / float lazer
	float position[2]; /// {3.f, 5.f}
	float direction[2]; /// {-4f, 7f}
	bool piercing;
	float sizeDamage; /// 13.2f
};

template<typename T>
Projectile<T>::Projectile(float speed, T damage, float position[2], float direction[2]):
	speed(speed), 
	damage(damage), 
	piercing(0),
	sizeDamage(0.0f)
{
	this->position[0] = position[0];
	this->position[1] = position[1];
	this->direction[0] = direction[0];
	this->direction[1] = direction[1];
}

template<typename T>
inline float Projectile<T>::getPosition(bool coordonate)
{
	return position[coordonate];
}

template<typename T>
inline void Projectile<T>::ispiercing(bool b)
{
	piercing = b;
}

template<typename T>
inline void Projectile<T>::setSizeDamage(float size)
{
	sizeDamage = size;
}

template<typename T>
inline void Projectile<T>::move()
{
	position[0] += direction[0] * speed;
	position[1] += direction[1] * speed;
}
