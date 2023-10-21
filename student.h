#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class student {
	
	int stuid;
	string sname;
	int marks1;
	int marks2;
	int marks3;
	
	public :student(){
		
//		stuid=101;
//		sname="sachin"
//		marks1=50;
//		marks2=60;
//		marks3=70;
//		
	}
	
	int getsname(){
		return sname;
	}
	
	void setmarks1(int marks1)
	{
		
		this->marks1=marks1;
	}
	
	void setmarks2(int marks2)
	{
		
		this->marks2=marks2;
	}
	
	void setmarks3(int marks3)
	{
		
		this->marks3=marks3;
	}
	
	
	
	
	
	
};
