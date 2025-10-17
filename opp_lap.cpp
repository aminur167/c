#include<bits/stdc++.h>
using namespace std;
class person
{
protected:
           string name;
           int age;
           int id;
public:
           void displayBasicDetails()
           {
               cout<<"Name: "<<name<<endl;
               cout<<"Age:"<<age<<endl;
               cout<<"Id:"<<id<<endl;
           }
           void setdetails(string n,int a,int i)
           {
               name=n;
               age=a;
               id=i;
           }
           string getName()
           {
               return name;
           }
           int getAge()
           {
               return age;
           }
           int getId()
           {
               return id;
           }
};
