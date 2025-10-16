#include<iostream>
using namespace std;
class student
{
    public:
          int id;
          double gpa;
          void display()
          {
            cout<<id<<"   "<<gpa<<endl;
          }
};

int main()
{
    student amin,momin;
    amin.id=101;
    amin.gpa=3.33;
    amin.display();

    momin.id=102;
    momin.gpa=3.55;
    momin.display();
    return 0;

}