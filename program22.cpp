#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Interest
{
    int principal, time, rate;

public:
    void getdata()
    {
        cout << "Enter principal amount, time, and rate: " << endl;
        cin >> principal>>time>>rate ;
       
    }

    void display()
    {
        cout << "Principal: " << principal << endl;
        cout << "Time: " << time << endl;
        cout << "Rate: " << rate << endl;
    }

    void findInterest()
    {
        int interest = (principal * time * rate) / 100;
        cout << "Interest is: " << interest << endl;
    }
};

int main()
{
    Interest i1;
    i1.getdata();
    i1.display();
    i1.findInterest();

    return 0;
}
