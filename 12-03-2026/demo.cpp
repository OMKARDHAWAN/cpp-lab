#include <iostream>
using namespace std;

// 4 pillars of oops
// encapsulation
// inheritance
// polymorsphisam
// abstraction

// encap
// access specifer
class Surname
{ 
  public:
  string surname = "Dhawan";
};

class Middlename : public Surname
{
  public :
  string Middlename = "Laxman";
};
class Firstname : public Middlename{
  public:
  string Name  = "Omkar";
};



int main()
{
 Firstname F1;
 cout << F1.Name + " "  + F1.Middlename + " " + F1.surname;
}
