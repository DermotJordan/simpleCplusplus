/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	Asset.cpp
 *
 * Description	:   Contains constructors and methods use by class
                    Asset. It has the constructor Asset() and the
                    methods getValue(), setValue(), getYear(),
                    depreciateAsset() and print_details().

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

/* Constructor which passes an integer y */
Asset::Asset(int y){

    /* Sets initial values of Private Data */
    value=1000;
    year=y;

}

/* Returns the variable value from private data */
float Asset ::getValue(){

    return(value);

}

/* Sets the variable Value in private data */
void Asset::setValue(float v){

    value=v;
}

/* Returns the year variable from the private data */
int Asset::getYear(){

    return(year);
}

/* Depreciates the value of the Asset by 20%*/
void Asset::depreciateAsset(){

    value=(value*0.8);

}/* Prints out the details of the private field of the object */
void Asset::print_details(){

cout<<endl<<"Asset Value: "<<value<<endl<<"Asset Year: "<<year<<endl;

}
