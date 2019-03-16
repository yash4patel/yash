#include<iostream>

using namespace std;

void TOH(int ,char ,char ,char );

int main()

{
   
 int t;

    char A,B,C;
  
  cin>>t;
 
   TOH(t,'A','B','C');

}

void TOH(int t,char a,char b,char c)

{

    if(t>0)

    {

        TOH(t-1,a,c,b);

        cout<<"move disk from"<< a <<"to"<< c <<"\n";

        TOH(t-1,b,a,c);

    }

}