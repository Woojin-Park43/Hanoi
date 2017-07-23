//
// Created by zzang on 2017-07-23.
//

#include <iostream>

using namespace std;

//Moves 'many' disks from column 'initial' to column 'moved' using 'tempo' as the temporary column.
int Hanoi (int many, int inital, int moved, int tempo)
{
    if (many > 0) {

        int newonedsg = many -1;

        Hanoi (newonedsg, inital, tempo, moved);
        cout << "The number of disk: " << many << " moved from colum " << inital << " to colum " << moved << endl;
        Hanoi (newonedsg, tempo, moved, inital);

    }
}

int main (void)
{
    int a;
    cout << "Type in the number of disks please!!!" << endl;
    // Type in the number of disks
    cin >> a;

    Hanoi (a,1,3,2);
}
