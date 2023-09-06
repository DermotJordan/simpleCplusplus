/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	Van.cpp
 *
 * Description	:   Contains the methods of class 'Electric_Van' which inherits the class
                    Van and from Van it inherits the class Vehicle and Asset. Conatins the implementation
                    of Electric_Van(), set_range(), print_details() and operator+() and depreciateAsset().
 *
 * Author		:	Diarmuid Mac Siurdain
 *
 * Student Number : 18382193
 *
 * Date			:	03/12/2020
 *
 *==================================================================*/

#include <iostream>

using namespace std;
#include "Asset.h"
#include "Vehicle.h"
#include "Van.h"
#include "ElectricVan.h"

/* Contstructor that creates and object and then uses the Van constructor which also a[pplies the vehicle constructor */
Electric_Van::Electric_Van(int van_id, int y ) : Van(van_id, y){

    /* Default value set of Objects proivate field */
    range_KM=0;


}

/* Passes an integer and sets that value as the range */
void Electric_Van::set_range(int range){

    /* Range equals the passed integer */
    range_KM=range;

}

/* Overloaded operator that adds the ranges of two Electric_Vans, and returns the integer value of the addition */
int Electric_Van::operator+(Electric_Van e_van2){

    return (range_KM+e_van2.range_KM);
}

/* Prints the details of the Object to the console window */
void Electric_Van::print_details(){

    /* Prints the Vehicle Registration number, capacity and range */
        cout<<endl<<"Electric Van details:"<<endl<< "Vehicle ID: " << get_vehicle_id() << endl <<"Capacity (Square Metres): "<< van_capac();
        cout<<endl<<"Range of Electric Van (KM): "<< range_KM;
        cout<<endl<<"Asset Value: "<<getValue()<<endl<<"Asset Year: "<<getYear();
    /* Tests if the vwhicle has been registered with vehicle method get_v_registered */
    if(get_v_registered()){

        /* If true prints this message */
        cout<<endl<<"Electric van is registered.";

    }else{

        /* If false prints this message */
        cout<<endl<<"Electric Van is not registered.";

    }
    cout<<endl;
}

/* Depreciates the Electric_Vans object value by 12.5% */
void Electric_Van::depreciateAsset(){

    setValue((getValue()*0.875));
}

