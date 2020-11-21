#include <iostream>
#include <string>
using namespace std;

double add(double num1, double num2)
{
    return num1 + num2;
}
double sub(double num1, double num2)
{
    return num1 - num2;
}
double multi(double num1, double num2)
{
    return num1 * num2;
}
double div(double num1, double num2)
{
    return num1 / num2;
}

int main()
{
   double val1;
   double val2;
   char op;

   cout << "Enter a operator: ";
   cin >> op;
   
   cout << "Enter a number1: ";
   cin >> val1;

   cout << "Enter a number2: ";
   cin >> val2;

   if(op == '+')
   {
       cout << add(val1, val2);
   }
   else if(op == '-')
   { 
       cout << sub(val1, val2);
   }
   else if(op == '*')
   {
       cout << multi(val1, val2);
   }
   else if(op == '/')
   {
       cout << div(val1, val2);
   }
   else
   {
       cout << "Invalid operator!!!";
   }

   return 0;
}