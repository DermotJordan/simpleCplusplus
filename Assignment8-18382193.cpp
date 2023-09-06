/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	Assignment8-18382193.cpp
 *
 * Description	:  This program uses the classes defined in Asset.h,Vehicle.h, Van.h and ElectricVan.h to
                   to test the methods employed. This test reads in the values required for the
                   from a file called comp20080-autumn2020-Asst8-data.txt. It then creates objects using
                   the classes defind in the header files and prints out an instance of these
                   object whenever a significant change has been made to the object using the
                   methods. It also outputs the sum of the Electric_Van objects to a file.

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
#include <fstream>
#include "Asset.h"
#include "Vehicle.h"
#include "Van.h"
#include "ElectricVan.h"

int main()
{
    /* Intgers needed for the inputs defined */
    int van_id, van_year, van_value, evan_id1, evan_year1, evan_id2, evan_year2, range1, range2;

    /* Opens the file */
    ifstream fsIn("comp20080-autumn2020-Asst8-data.txt", ios::in);

    /* Error check in the opening of the file */
    if(!fsIn.is_open()){

        cout<<endl<<"File Could not be opened";
        return(-1);
    }

    /* Attains values from the file */
    fsIn>>van_id>>van_year>>evan_id1>>evan_year1>>evan_id2>>evan_year2>>range1>>range2>>van_value;

    /* Closes file */
    fsIn.close();

    /* Constructs an object of Van and Electric_Van classes and passes their id and year*/
    Van Van1(van_id, van_year);
    Electric_Van e_van1(evan_id1, evan_year1);
    Electric_Van e_van2(evan_id2, evan_year2);


    /* Prints out details of the Van and Electric_Van's using the method in the classes */
    cout<<endl<<"First Van"<<endl;
    Van1.print_details();

    cout<<endl<<"First Electric Van"<<endl;
    e_van1.print_details();

    cout<<endl<<"Second Electric Van"<<endl;
    e_van2.print_details();


    /* Uses register method to register the Vehicles */
    Van1.register_vehicle();
    e_van1.register_vehicle();
    e_van2.register_vehicle();

    /* Using the set_range method to set their range */
    e_van1.set_range(range1);
    e_van2.set_range(range2);

    /* Uses setValue to set Vans Value */
    Van1.setValue(van_value);

    /* Uses depreciateAdsset to depreciate the values*/
    Van1.depreciateAsset();
    e_van1.depreciateAsset();
    e_van2.depreciateAsset();

    /* Prints out details of the Van and Electric_Van's using the method in the classes */
    cout<<endl<<"First Van"<<endl;
    Van1.print_details();

    cout<<endl<<"First Electric Van"<<endl;
    e_van1.print_details();

    cout<<endl<<"Second Electric Van"<<endl;
    e_van2.print_details();

    /* Opens output file */
    ofstream fsOUT("comp20080-autumn2020-Asst8-output.txt", ios::out);

    /* Error check in the opening of the file */
    if(!fsOUT.is_open()){

        cout<<endl<<"File Could not be opened";
        return(-1);
    }

    /* Prints out the sum of the ranges using the overloaded operator '+' to a file*/
    fsOUT<<"Result of adding the two ranges of the Electric Vans (KM): "<< (e_van1+e_van2) <<endl;

    /* Closes file */
    fsOUT.close();


    return 0;
}
