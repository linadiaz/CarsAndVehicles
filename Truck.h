#include <iostream>
#include "vehicle.h"


using namespace std;

class Truck{
	public:
		int capacity;
		
	public:
		Truck(); // constgructor vacio
		// seter asignamos valores
		void setTruck(int);
		// geter retorna valores
		int getCapacity();
		
		void displayInfo();


};
Truck::Truck(){ // constructor vacio
}
// seter asignamos valores a year y manufacture
void Truck::setTruck(int c){
	capacity = c;
	
}
// metodo get que return el capacity
int Truck::getCapacity(){
	return year;
}

void Truck::displayInfo(){
	cout <<" information Vehicle "<<endl;
	cout << " Manufacture " << manufacture<<endl;
	cout << " capacity"<< capacity<<endl;


}