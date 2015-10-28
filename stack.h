class stack
{
private:
	complexnumber s[100];
	int finish;
public:
	stack();
	void init();
	void push(complexnumber z);
	complexnumber pop();
};