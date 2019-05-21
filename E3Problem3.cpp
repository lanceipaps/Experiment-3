#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
 
void Reverse(string name);
 
int main()
{
	string name="";
 
	cout<<"Type anything here: ";
	getline(cin,name);
 
	cout<<"Reversed : ";
 
	Reverse(name);
	cout<<endl;
 
	return 0;
}
 
void Reverse(string name)
{
	if(name == "")
	{
		return;
		
	}
	else
	{
		Reverse(name.substr(1));			
		cout<<name.at(0);
	}
}
