#include<iostream>
using namespace std;
int main()
{
  int p;
  cin>>p;
  while(p>0)
{
    int i;
    i++;
  int lastdigit = p%10;

  int remainigdigit = p-lastdigit;

   p =remainigdigit/10;

   switch(i)
   {
   case 1 :
   case 2:
   case 3:
   case 4:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
   case 10:
   case 11:
   case 12:
   case 13:
   case 14:


    cout<<lastdigit;

   }
}




  return 0;
}
