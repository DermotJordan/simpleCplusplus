/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	Van.cpp
 *
 * Description	:   Contains the methods of class 'Van' which inherits the class
                    vehicle and Asset. Conatins the implementation of Van(), van_capac() and
                    print_details() and depreciateAsset().
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

/* Connstructor ro construct an object of Van,
    also calls on the constructor of the Vehicle and Asset class */
Van::Van(int van_id, int y) : Vehicle( van_id ), Asset(y){

    /* Sets capacity value */
    capac_sq2M=4.5;

}

/* Method to find the capacity of an object */
float Van::van_capac(){

    /* Returns capacity */
    return capac_sq2M;

}
/* Method to print the details of the van object */
void Van::print_details(){

    /* Prints all the general details of the Van object and uses methods found in Vehicle.h to find the id of the vehicle */
    cout<<endl<<"Van details:"<<endl<< "Vehicle ID: " << get_vehicle_id() << endl <<"Capacity (Square Metres): "<< van_capac();
    cout<<endl<<"Asset Value: "<<getValue()<<endl<<"Asset Year: "<<getYear();
    /* Checks if Vehicle is registered using the method of Vehicle class get_v_registered */
    if(get_v_registered()){

        /* If true prints out that it is registered */
        cout<<endl<<"Van is registered.";
    }else{

        /* If false prints out it is not registered */
        cout<<endl<<"Van is not registered.";
    }
    cout<<endl;
}

/* Depreciates the Vans object value by 25% */
void Van::depreciateAsset(){

    setValue((getValue()*0.75));
}

