#include <iostream>
using namespace std; 
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    friend class user;
public:
    void A(void);
    void Z(void);
    void add(Time T1,Time T2);
};
 
void Time::A(void)
{
    cout << "Enter time" << endl;
    cout << "Hours = ";    cin>>hours;
    cout << "Minutes = ";  cin>>minutes;
    cout << "Seconds = ";  cin>>seconds;
}
 
void Time::Z(void)
{
    cout << endl;
    cout << "Total Time = ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::add(Time T1,Time T2)
{
     
    this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.A();
    T2.A();
    T3.add(T1,T2);
    T3.Z();
}

