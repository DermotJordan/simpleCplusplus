/*==================================================================
 *          COMP20080 Computer Science for Engineers II
 *
 * File Name	:	Van.h
 *
 * Description	:   Contains the class 'Van' which inherits the class
                    vehicle. Contains one private field that defines the capacity
                    of the van called capac_sq2M. Conatins one constructor and
                    two methods. Van(), van_capac() and print_details().
 *
 * Author		:	Diarmuid Mac Siurdain
 *
 * Student Number : 18382193
 *
 * Date			:	03/12/2020
 *
 *==================================================================*/

class Van : public Vehicle, public Asset {

private:

    /* Private variable */
    float capac_sq2M;

public:

    /* Constructor */
    Van(int van_id, int y);

    /* method to find capacity of object */
    float van_capac();

    /* method to print details of object */
    void print_details();

    /* Method to depreciate value of Van Object */
    void depreciateAsset();

};

