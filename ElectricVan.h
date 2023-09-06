/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	ElectricVan.h
 *
 * Description	:   Contains the class 'Electric_Van' which inherits the class
                    van and from vanit inherits the class vehicle. Contains
                    one private field that defines the range
                    of the Electric_Van in KM called ramge_KM. Conatins one constructor,
                    two methods and an overloaded operator. Electric_Van(), set_range(),
                    print_details(), depreciate Asset and operator+().
 *
 * Author		:	Diarmuid Mac Siurdain
 *
 * Student Number : 18382193
 *
 * Date			:	03/12/2020
 *
 *==================================================================*/


class Electric_Van : public Van{

private:

    /* Private field of type int defined */
    int range_KM;

public:

    /* constructor */
    Electric_Van(int y, int van_id);

    /* Method to set the range of the Object */
    void set_range(int);

    /* Overloaded operator that adds the ranges of the objects*/
    int operator+(Electric_Van);

    /* Prints the details of the Electric_Van Object */
    void print_details();

    /* Method to depreciate value of Electric_Van Object */
    void depreciateAsset();

};

