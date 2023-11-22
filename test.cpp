#include <DirectXMathVector.inl>
#include <iostream>
using namespace std;
Class Student{
public:
	string name;
	int studnetNumber;

	void setName(string name)
	{
		name = name;
	}

	string getName()
	{
		return name;
	}

	void setstudentNumber(int num) 
	{
		studnetNumber = num;
	}

	int getStudnetNumebr() 
	{
		return studnetNumber;
	}
};


int main()
{
	Student newStudent;
	newStudent.setName("JoeBob Briggs");
	cout << newStudent.geName();

	return 0;
}


