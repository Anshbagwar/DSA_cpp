

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



