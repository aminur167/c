#include<iostream>
using namespace std;
class student
{
    public:
        int age,roll;
        string name;
        void setName(string n)
        {
            name=n;
        }
};


int main()
{
    student amin;
    amin.setName("ajfdk");
}