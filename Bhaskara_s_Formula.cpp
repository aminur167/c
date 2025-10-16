    #include<iostream>
    #include<cmath>
    #include<iomanip>
    using namespace std;
    int main()
    {
        float a,b,c,x,y;
        cin>>a>>b>>c;
        float result=b*b-4*a*c;
        if(result>=0&&a!=0)
        {
            x=(-b+sqrt(result))/(2*a);
            y=(-b-sqrt(result))/(2*a);
            cout<<fixed << setprecision(5);
            cout<<"R1 = "<<x<<endl<<"R2 = "<<y<<endl;    }
        else
        {
            cout <<"Impossivel calcular"<<endl;
        }
        return 0;
    }
