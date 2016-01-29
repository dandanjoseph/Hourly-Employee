/*
 *
 * This program returns wages for a employee
 * It works with HourlyEmployee.h
 * There are no bugs in the program
 * Assignment by: Joseph Dandan
 *
 *
 *
 *
 * */
#include <iostream>
#include <string>

#include "HourlyEmployee.h"

using namespace std;

/*Constructor*/
HourlyEmployee::HourlyEmployee(string nameArg, int idArg, double wageArg) {
	//this is our constructor hourly employee
    id = idArg;//this is our id variable that is equal to our idArg
    name = nameArg;//this is our name variable that is equal to our nameArg
    wage = wageArg;//this is our wage variable that is equal to our wageArg
}
/*a getter for the id*/
int HourlyEmployee::getID() {
	//this is the getter for our id
    return id;//it returns our id
}

/* a getter for name */
string HourlyEmployee::getName() {
    return name;//we return the name
}
/*a setter for our wage taking a dobule*/
double HourlyEmployee::setHourlyWage(double x) {
    //we set our hourly wage to a double value
   wage = x;//this is were we set our wage equal to the parameter inputted
}
/*a getter for the hourlywage*/
double HourlyEmployee::getHourlyWage() {
    return wage;//this returns our wage
}

/*This is our calculateweekelypay were we use a double of hours*/
 void HourlyEmployee::calculateWeeklyPay(double hours) {
	double total;
	//we have a variable double called total
	double var;
	//we have a variable double called var

	 if (hours <=40){
		 //if our hours are less than 40

		total = hours * wage;
		//we calculate our total to be hours times our wage

	 }
	  if(hours >=40){
		  //if our hours are greater than 40
		  var = hours-40;
		  //we calculate the overtime thats more than 40
		  total = (40 * wage) +((var * ((wage*(1.5))) ));
		  //our total is then the wage times 40 and our overtime which adds for time and a half


	  }
	  cout<<total;//we display our weekly pay
}





