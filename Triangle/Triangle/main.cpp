//
//  main.cpp
//  Triangle
//
//  Created by Ahdab Nasir on 04/09/2017.
//  Copyright © 2017 Ahdab Nasir. All rights reserved.
//

#include <iostream>
using namespace std;

class Triangle {
    
private:
    unsigned int sideA, sideB, sideC;
    
public:
    
    Triangle() {
        this->sideA = 0;
        this->sideB = 0;
        this->sideC = 0;
    }
    
    Triangle(int a, int b, int c ) {
        if (a < 0 || b < 0 || c < 0) {
            this->sideA = 0;
            this->sideB = 0;
            this->sideC = 0;
        } else {
            this->sideA = a;
            this->sideB = b;
            this->sideC = c;
        }
    }
    
    void print() {
        cout << sideA << sideC << sideC << endl;
    }
    
    bool checkIfTriangle() {
        if (sideA + sideB > sideC && sideC + sideB > sideA && sideA + sideC > sideB)
            return true;
        else return false;
    }
    
    void checkTriangleType() {
        if (!checkIfTriangle()) {
            cout<<"Not a valid triangle"<<endl;
        } else {
          if (sideA == sideB && sideB == sideC)
              cout << "Equilateral"<<endl;
            else if (sideA == sideB || sideB == sideC || sideC == sideA)
                cout<<"Isosceles"<<endl;
            else
                cout<<"scalene"<<endl;
        }
    }
};

int main() {

    Triangle t1 (6,7,8);
    Triangle t2 (6,5,5);
    Triangle t3 (7,7,7);
    Triangle t4;
    Triangle t5 (-1,3,7);
    Triangle t6 (0,0,0);
    
    Triangle triangles[] = {t1,t2,t3,t4,t5,t6};
    for (int i = 0; i < 6; i++) {
        triangles[i].checkTriangleType();
    }
}




















