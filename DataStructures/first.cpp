#include<iostream>
using namespace std;

class C1
{
int x;
public:
C1(){ x = 50; cout<<"\n Print 1"; }
C1(int temp){ x = temp; cout<<"\n Print 2"; }
void f1(){ cout<<"\nEnter X"; cin>>x; }
void f2(int temp){ x = temp; }
void f3(){ cout<<"\nX in C1 is = "<<x; }
~C1(){ cout<<"\n Print 3"; }
};

class C2
{
int y;
public:
C2(){ y = 60; cout<<"\n Print 4"; }
C2(int temp){ y = temp; cout<<"\n Print 5"; }
void f4(){ cout<<"\nEnter Y"; cin>>y; }
void f5(int temp){ y = temp; }
void f6(){ cout<<"\nY in C2 is = "<<y; }
~C2(){ cout<<"\n Print 6"; }
};

class C3
{
C1 *objC1type[2];
C2 objC2type[2];
public:
C3(){ cout<<"\n Print 7";}
C3(int temp){ cout<<"\n Print 8"; }
void f7(int temp){ objC1type[0] = new C1; objC1type[1] = new C1(temp); }
void f8(){ C1 *temp1 = new C1(20); C2 temp2; temp1 -> f3(); temp2.f6(); }
void f9(C1 *temp1)
{
C1 *temp2, *temp3, temp4; temp2 = temp1; temp2->f2(30); temp3 = new C1;
temp3->f2(40); temp4.f2(70);
temp1 -> f3(); temp2 -> f3(); temp3 -> f3(); temp4.f3();
}
~C3(){ cout<<"\n Print 9"; }
};


class C4
{
C3 *obj1, obj2;
public:
C4(){ obj1 = new C3; cout<<"\n Print 10"; }
void f10(){ C3 *temp1, temp2; temp1 = new C3(10); }
~C4(){ cout<<"\n Print 11"; }
};

int main()
{
    C1 *objC1 = new C1;
    objC1 -> f3();
    C3 objC3; C4 objC4;
    objC3.f7(5); objC3.f8();
    objC3.f9(objC1);
    objC4.f10();
    objC1 -> f3();
    return 0;
}
