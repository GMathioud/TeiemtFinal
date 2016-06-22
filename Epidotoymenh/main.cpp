/* Copyright (C) <2016>  George Mathioudakis

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
double math[5];

void clear() {
    for (int f = 0; f < 5; f++) {
        math[f] = 0;
    }
}

double mesos() {
    double mo = 0;
    for (int i = 0; i < 5; i++) math[i] = math[i] / 6;
    for (int i = 0; i < 5; i++) mo = mo + math[i];
    return mo / 5;
}

int database(int scnt) {
    ifstream grad("studentsD.txt");
    if (!grad) {
        cout << endl << "Cannot open file: studentsD.txt" << endl;
        return 1;
    }
    double id;
    double mo_all = 0;
    clear();

    while (!grad.eof()) {
        for (int line = 1; line < scnt; line++) {
            for (int pos = 1; pos <= 7; pos++) {
                grad >> id;
            }
        }
        for (int i = 1; i <= 6; i++) { 
            for (int k = 0; k <= 6; k++) { 
                if (k >= 2) {
                    grad >> id;
                    math[k - 2] = math[k - 2] + id;
                } else {
                    grad >> id;
                }
            }
            for (int j = 1; j <= 28; j++) {
                grad >> id;
            }
        }
        mo_all = mesos();
        for (int i = 0; i < 5; i++) {
            cout << math[i] << "_";
        }
        cout << mo_all;
        grad.close();
        return 0;
    }
}

int main() {
    ifstream stud("studentsH.txt");
    if (!stud) {
        cout << "Cannot open file: studentsH.txt" << endl;
        return 1;
    }
    string id;
    int i = 1;

    cout << "Copyright (c) <2016> George Mathioudakis" << endl;
    cout << string(53, '=') << endl;
    while (!stud.eof()) {
        for (int j = 1; j <= 3; j++) {
            stud >> id;
            cout << id << "_";
        }
        if (database(i) == 1) return 1;
        cout << endl;
        i++;
    }
    cout << string(53, '=') << endl;
    stud.close();
    return 0;
}