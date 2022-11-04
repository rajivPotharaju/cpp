
//factriol 
#include <iostream>
using namespace std;
int fact(int n) {
   if ((n==0)||(n==1))
   return 1;
   else
   return n*fact(n-1);
}
int main() {
   int n ;
   cout<<"Enter the num";
   cin>>n;
   cout<<"Factorial of "<<n<<" is "<<fact(n);
   return 0;
}

//area of circle using function
#include<iostream>
using namespace std;
void Circle (int radius)
{
float pi=3.14;
float area= pi*radius*radius;
cout<<area;

}
int main()
{
    int radius;
cout<<"enter the radius:";
cin>>radius;
Circle(radius);
return 0;
}
