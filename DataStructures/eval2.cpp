#include<iostream>
#include<string>

using namespace std;
class bank
{
    private:
        char name[20];
        char address[20];
        char manager[20];

    public:
        void bank()
        {
            name="SBI";
            address="Noida";
            manager="Random";
        }
};

class account: public bank
{
    private:

        int acc_no;
        char customer[];

    public:
            int count1=0;
            int bal;
            void account(int a, char b, int c)
            {
                    acc_no=a;
                    customer=strcpy(b);
                    bal=c;
                    count1++;

            }
};

class saving_acc: public account
{
    private:

        int withdraw;
        int deposit;

    public:
        int stran;
        void deposit_money(int a)
        {
            bal=bal+a;
            stran++;
        }

        void withdraw_money(int b)
        {
            bal=bal-b;
            stran++;
        }

        int transaction()
        {
            return stran;
        }
};

class current_acc: public account
{
    private:
        int ctran;
        int withdraw;
        int deposit;

    public:

                    void deposit_money(int a)
                    {
                        bal=bal+a;
                    }

                    void withdraw_money(int b)
                    {
                        bal=bal-b;
                    }

};


main()
{
    saving_acc sa1;
    sa1.deposit_money(1000);
    cout<<stran;
}
