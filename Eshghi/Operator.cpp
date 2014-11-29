#include <iostream>
using namespace std;
class sinai
{
public:
	sinai(int x=1)
	 : sam(x)
	{
	}

	sinai &operator*()
	{
		sam *= sam;
		return *this;
	}

	sinai &operator*( sinai &)
	{
		cout << "hello";
		sam += sam;
		return *this;
	}
	int get(){	return sam;}
private:
	int sam;

};// end class

int main()
{
	sinai Sinai( 3 );
	 *(Sinai*Sinai);
	cout << Sinai.get() << endl;
}
