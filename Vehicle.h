#include <iostream>

using namespace std;

class Vehicle{
	public:
		int year;
		string manufacture;
	public:
		Vehicle(); // constgructor vacio
		// seter asignamos valores 
		void setVehicle(int,string);
		// geter retorna valores
		int getYear();
		string getManufacture();
		void displayInfo();

		
};
Vehicle::Vehicle(){ // constructor vacio
}
// seter asignamos valores a year y manufacture
void Vehicle::setVehicle(int y, string m){
	year = y;
	manufacture =m;
}
// metodo get que return el aÒo
int Vehicle::getYear(){
	return year;
}
// metodo get que return manufacture
string Vehicle::getManufacture(){
	return manufacture;
}
void Vehicle::displayInfo(){
	cout <<" information Vehicle "<<endl;
	cout << " Manufacture " << manufacture<<endl;
	cout << " aÒo de build "<< year<<endl;
	

}
