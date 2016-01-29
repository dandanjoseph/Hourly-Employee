/*
 * This is the H file for our Hourly Employee project
 *
 * */

#ifndef HOURLYEMPLOYEE_H
#define	HOURLYEMPLOYEE_H

#include <string>

using namespace std;

class HourlyEmployee {
private:

    int id; //variable for id
    double wage; //salary variable
    string name; //


public:

    HourlyEmployee(string, int, double);

    int getID();
    //this is for thid
    string getName();
    //this is my get name method
    double getHourlyWage();
    //this is my getter for the salary
    double setHourlyWage(double);
    //this is my setter for the salary

    void calculateWeeklyPay(double);
    //this is for calculating the weekly pay
};


#endif	/* STUDENT_H */
