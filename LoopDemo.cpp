#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n Welcome to the demo for arrays and strings! \n\n" << endl;

    //create an int array
    int myNumbers [12];
    myNumbers[1] = 11;

    cout << "\n\n Expected is 11..." << myNumbers [1] << endl;
    cout << "\n\n Expected is a null value..." << myNumbers [2] << endl;
    cout << "\n\n ?? out of bounds ?? ..." << myNumbers[2] << endl;

    // Let's code up a for loop
    for (int i = 0; i < 12; i++) {

        cout << "\n\n " << i << " " << myNumbers[1];

    }

    cout  << endl << endl << endl;

    int my2darray [3][2];

    //hard code the values

    my2darray [0][0] = 11;
    my2darray [0][1] = 12;

    my2darray [1][0] = 21;
    my2darray [1][1] = 22;

    my2darray [2][0] = 31;
    my2darray [2][1] = 32;

    cout << "\n\n\n";
    //nested

    for ( int i = 0; i < 3; i++) {

        for ( int j = 0; j < 2; j++) {
            cout << my2darray[i][j] << " ";

        }
        cout << "\n\n\n";
    }
        cout << "\n\n\n";

        int row0col0 =71;

        //
        for (int i = 0; i < 3 ; i++) {
            for (int j= 0; j < 2; j++) {
                my2darray[i][j] = row0col0++;
            }
            //
            row0col0 = row0col0 - 2;
            row0col0 += 10;
        }



    return 0;
}
