#include <iostream>

using namespace std;

int main()
{
   int num;

   bool isPrime = true;

   cout << "Enter any number (should be a positive integer): ";

   cin >> num;

   for(int i = 2; i <= num / 2; ++i)
    {
      if(num % i == 0)

      {
         isPrime = false;

         break;
      }
   }

   if (isPrime == true)
        {

      cout << num<< "It is a prime number:" ;
        }
   else
        {

      cout << num<< "It is not a prime number:" ;
        }
   return 0;
}
