class complexnumber
{
private:
	double real;
	double image;
public:
	complexnumber(double a = 0.0, double b = 0.0);
	complexnumber(complexnumber &a);
	double getRe();
	double getIm();
	double complabs();
	complexnumber add (complexnumber zone, complexnumber ztwo);
	complexnumber substr(complexnumber zone, complexnumber ztwo);
	complexnumber mult(complexnumber zone, complexnumber ztwo);
	complexnumber div(complexnumber zone, complexnumber ztwo);
	complexnumber conj();
	~complexnumber();
};