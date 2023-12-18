

#include<iostream>
using names.pace std;
int c= 0 ;
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    c++;
    towerOfHanoi(n - 1, auxiliary, source, destination);
    
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towerOfHanoi(numDisks, 'A', 'B', 'C');
   	cout << c<< endl ;
    return 0;
}

//
//
//#include <iostream>
//#include <iomanip>
//
//int main() {
//    double distance;
//    double time;
//
//    std::cout << "Enter the distance (in miles): ";
//    std::cin >> distance;
//
//    std::cout << "Enter the time (in hours): ";
//    std::cin >> time;
//
//    // Calculate speed (speed = distance / time)
//    double speed = distance / time;
//
//    int decimalPlaces;
//    std::cout << "Enter the number of decimal places for speed: ";
//    std::cin >> decimalPlaces;
//
//    // Set the precision for displaying speed
//    std::cout << "The speed is: " << std::fixed << std::setprecision(decimalPlaces) << speed << " miles per hour" << std::endl;
//
//    return 0;
//}

