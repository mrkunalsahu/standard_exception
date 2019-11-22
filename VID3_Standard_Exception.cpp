#include<iostream>
using namespace std;
class canGoWrong
{
public:

canGoWrong()
{ char *pMemory= new char [99999999999999];//allocationg memory more than capacity so it will throw exception automatically
 delete [] pMemory;//deleting that
}};
int main()
{
	try{
	canGoWrong wrong;//trying to create the object of the class which throws standard exception 
}
catch (bad_alloc &e)//container of the exception from bad_alloc class
{
cout<<"Cought exception : "<<e.what();//It will catch the exception and then e.what() will print explainatory string of the exception
}

cout<<"\nThis must finally be executed";
	return 0;
}