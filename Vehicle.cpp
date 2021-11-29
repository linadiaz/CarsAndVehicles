#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Vehicle.h"

using namespace std;

class car : public Vehicle{
	

};


main(){

	car c; // se instancia la clse vehicle
	system("cls");
	cout << "Vehicle Program" <<endl;
	cout<<endl;
	cout <<" Vehicle"<<endl;
	string manu; // variable para pedir manufactura
	int ano;  // variable para el aÒo de manufact

	cout <<" Enter the manufacturer "<<endl;
	
	
	cin >> manu;

	cout << " Enter de year build "<<endl;
	
	cin >>ano;

	// cargamos datos con setter
	c.setVehicle(ano,manu);
	// display information de vehicle
	c.displayInfo();

	system("pause");
	return 0;
}
