using namespace std;

template<class X, class Y>
class Para
{
public:
	Para(X val0, Y val1);
	Para(const Para<X, Y> &pcOther);
	~Para();
	void operator=(const Para<X, Y> &pcOther);
	X getVal0();
	Y getVal1();
	void setVal0(X val);
	void setVal1(Y val);
private:
	X* value0;
	Y value1;
};