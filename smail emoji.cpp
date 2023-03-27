#include<iostream>

using namespace std;

int main()
{


   cout << "Name: Muhammad Mijanur Rahman"<<endl;
   cout << "Student ID: CSE2001019249"<<endl;

   int smiley, i, limit;
   char ch;

   smiley = 1;
   ch = smiley;

   cout<<"How many smiley face to print?";
   cin>>limit;

   for(i=0; i<limit; i++)
   {
      cout<<ch;
      cout<<"\t";
   }

   cout<<endl;

   return 0;
}
