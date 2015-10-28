#include "complexnumbers.h"
#include <iostream>
#include <math.h>

using namespace std;

//конструктор со значениями по умолчанию
complexnumber::complexnumber(double a, double b)
{
	this->real = a;
	this->image = b;
}
//конструктор копирования
complexnumber::complexnumber(complexnumber &a)
{
	real = a.real;
	image = a.image;
}

double complexnumber::getRe()
{
	return real;
}

double complexnumber::getIm()
{
	return image;
}

double complexnumber::complabs()
{
	return sqrt(real*real + image*image);
}

complexnumber complexnumber :: add(complexnumber zone, complexnumber ztwo)
{
	double resum = zone.real + ztwo.real;
	double imsum = zone.image + ztwo.image;
	complexnumber sum(resum, imsum);
	return sum;
}
complexnumber complexnumber::substr(complexnumber zone, complexnumber ztwo)
{
	double rediff = zone.real - ztwo.real;
	double imdiff = zone.image - ztwo.image;
	complexnumber diff (rediff, imdiff);
	return diff;
}
complexnumber complexnumber::mult(complexnumber zone, complexnumber ztwo)
{
	double reprod = zone.real * ztwo.real - zone.image * ztwo.image;
	double improd = zone.image * ztwo.real + zone.real * ztwo.image;
	complexnumber prod(reprod, improd);
	return prod;
}
complexnumber complexnumber::div(complexnumber zone, complexnumber ztwo)
{
	double requot = (zone.real * ztwo.real + zone.image * ztwo.image) / (ztwo.real*ztwo.real + ztwo.image*ztwo.image);
	double imquot = (zone.image * ztwo.real - zone.real * ztwo.image) / (ztwo.real*ztwo.real + ztwo.image*ztwo.image);
	complexnumber quot(requot, imquot);
	return quot;
}

complexnumber complexnumber::conj()
{
	complexnumber conjugated (real, image*(-1));
	return conjugated;
}

complexnumber::~complexnumber()
{

}


