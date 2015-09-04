#include<iostream>
using namespace std;
class Base
{
public :
void Display() // NORMAL FUNCTION
{
cout<<"\n\tDisplay Base.";
}
virtual void Show()
// VIRTUAL FUCNTION, DECLARED WITH THE KEYWORD "virtual"
{
cout<<"\n\tShow Base.";
}
};
class Derived : public Base
{
public :
void Display() // OVERRIDDING THE NORMAL FUNCTION
{
cout<<"\n\tDisplay Derived.";
}
void Show()
// OVERRIDDING THE VIRTUAL FUCNTION, KEYWORD "virtual" IS NOT NEEDED
// HERE
{
cout<<"\n\tShow Derived.";
}
};
int main(void)
{
Base *bptr; // POINTER OF THE BASE CLASS
Base b;
Derived d;
bptr = &b; // STORING THE ADDRESS OF THE BASE CLASS OBJECT
bptr->Display(); // THIS WILL PRINT "Display Base."
bptr->Show(); // THIS WILL PRINT "Show Base."
bptr = &d; // STORING THE ADDRESS OF THE DERIVED CLASS OBJECT
bptr->Display(); // THIS WILL STILL PRINT "Display Base."
bptr->Show(); // THIS WILL PRINT "Show Derived."
return 0;
}
