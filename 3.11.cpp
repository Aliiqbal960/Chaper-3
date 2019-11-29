#include <iostream>
#include<string>
using namespace std;

    class MotorVehicle{
    private:
        string motor_vehicle,FuelType,color;
        int yearOfManuFacture,engineCapacity;

    public:
        MotorVehicle(string m,string f,string c){
            motor_vehicle=m;
            FuelType=f;
            color=c;
            }
        
        void getpart(){
            cout<<"Motor Vehicle:"<<motor_vehicle<<endl<<"Fuel Type:"<<FuelType<<endl<<"Color:"<<color<<endl<<"Year of Manufacture:"<<"2018"<<endl<<"Engine Capacity:"<<"1500"<<endl;
            }
        void setpart(string a){
            motor_vehicle=a;
            }
        void displaycardetail(){
            getpart();
        }
            };
    
int main()
{
    MotorVehicle a("Toyota","High Obtained","Formula Red Turbo");
    a.displaycardetail();
    return 0;
}
