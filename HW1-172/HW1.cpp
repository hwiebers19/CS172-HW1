//
//  EX02.cpp
//  HW1-172
//
//  Created by Heidi Wiebers on 9/8/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "HW1.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void ex02()
{
    bool hasPassedTest=true;
    srand(time(NULL));
    int x=rand()%100;
    int y=rand()%100;
    cout << "x is: " << x << endl;
    cout << "y is: " << y<< endl;
    
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    if (x == y)
    {
        cout << "x is equal to y" << endl;
    }
    else
    {
        cout << "y is greater than x" << endl;
    }
    int numberOfShares=0;
    cout << "Enter a value for the number of shares: " ;
    cin >> numberOfShares;
    if (numberOfShares < 100)
    {
        cout << "Number of shares is less than 100" << endl;
    }
    else
    {
        cout << "Number of shares is greater than 100" << endl;
    }
    int boxWidth=0;
    cout << "Enter a box width: " ;
    cin >> boxWidth;
    
    int bookWidth=0;
    cout << "Enter a book width: " ;
    cin >> boxWidth;
    
    if (boxWidth/bookWidth)
    {
        cout << "The box width is evenly divisable by the book width" ;
    }
    
    int shelfLifeOfChocolate=0;
    cout << "Enter the shelf life for a box of chocolates: " ;
    cin >> shelfLifeOfChocolate;
    int outsideTemp=0;
    cout << "Enter the outside tempurature: " <<endl;
    cin >> outsideTemp;
    
    if (outsideTemp>90)
    {
        int NewShelfLife=0;
        shelfLifeOfChocolate - 4 == NewShelfLife;
        cout << 'NewShelfLife';
    }
    
    
}

void ex03()
{
    int areaOfASquare=0;
    cout << "Enter the area of a square "<<endl;
    cin >> areaOfASquare;
    double diagonalOfSquare=0;
    diagonalOfSquare = sqrt(2*areaOfASquare);
    cout << diagonalOfSquare <<endl;
    
    char csResponse ='y';
    cout << "Have you taken CS before, y for yes and n for no? ";
    cin >> csResponse;
    if (csResponse == 'y')
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" <<endl;
    }
    
    // (c) char tab = 'a';
    
    string mailingAdress;
    cout << "Enter your mailing address ";
    cin >> mailingAdress;
    cout << "Your mailing adress is " <<mailingAdress << endl;
    
    // (e) string
    
    
    
}

void ex04()
{
    int answer=0;
    cout << "Enter a number 1 and 10: ";
    cin >> answer;
    if (answer>=1 && answer <=10)
    {
        cout << "Your answer is correct" << endl;
    }
    else
    {
        while(answer<1 || answer>10)
        {
            cout << "Number is invalid, please try again: " <<endl;
            cin >> answer;
            
        }
    }
    
    /*int answerCubed=0;
    answer*answer*answer==answerCubed;
    
    cout << "Your answer cubed is " << 'answerCubed' <<endl;
    
    
    do{
        
    }while(
    */
    
}

void ex05()
{
    int number=0;
    int integer[number];
    for (int i=0; i<size; i++)
    {
        integer[i]=number();
    }
}


