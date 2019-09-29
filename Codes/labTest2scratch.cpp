#include <iostream>
#include <math.h>
#include<string.h>

using namespace std;

class point
{
   public:

    int x;
    int y;

   int set_x()
   {
       int a=0;
       cin>>a;
       return a;
   }

   int set_y()
   {
       int b=0;
       cin>>b;
       return b;
   }

   void move(int a=0, int b=0)
   {
       point any;
       any.x= a;
       any.y=b;
   }

   int x_ret() const
   {
       return x;
   }

   int y_ret() const
   {
       return y;
   }

};

int main()
{
    point space;

    space.set_x();
    space.set_y();

    space.move(2,4);

    space.x_ret();
    space.y_ret();

    return 0;
}
