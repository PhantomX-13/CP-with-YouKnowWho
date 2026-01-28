#include<iostream>
using namespace std;
int main(){
   int a, b, c; 
   cin >> a >> b; 
   int temp = a;
   a = b; 
   b = temp;
   

   cin >> c ;
   temp = b;
   b = c;
   c = temp;
   cout<<"a= "<< a<< endl;
   cout<<"b= "<<b << endl;
   cout<<"c= " << c<< endl;
   return 0;
}