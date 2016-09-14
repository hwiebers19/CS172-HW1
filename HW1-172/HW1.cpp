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
int timestwo(int value);
int add (int v1, int v2);
void add1(int& p);
void outputarray(int array[], int size);
void outputarray2(int array[], int size);
void ex02()
{
    // declare variable has passed test and set to true
    bool hasPassedTest=true;
    
    // declare variables x and y and initialize to random numbers
    srand(time(NULL));
    int x=rand()%100;
    int y=rand()%100;
    cout << "x is: " << x << endl;
    cout << "y is: " << y<< endl;
    
    // output if x is greater than or equal to y
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    if (x == y)
    {
        cout << "x is equal to y" << endl;
    }
   
    // declare variables number of shares
    int numberOfShares=0;
    cout << "Enter a value for the number of shares: " ;
    cin >> numberOfShares;
    // outputs if value is less than 100
    if (numberOfShares < 100)
    {
        cout << "Number of shares is less than 100" << endl;
    }
    else
    {
        cout << "Number of shares is greater than 100" << endl;
    }
    
    int boxWidth=0;
    // prompt user for box width
    cout << "Enter a box width: " ;
    cin >> boxWidth;
    
    int bookWidth=0;
    // prompt user book width
    cout << "Enter a book width: " ;
    cin >> bookWidth;
    
    // outputs if the box width is evenly divisible by the book width
    if (boxWidth/bookWidth)
    {
        cout << "The box width is evenly divisable by the book width" << endl;
    }
    
    else
    {
        cout << "The box width is not evenly divisable by the book width"<<endl;
    }
    
    int shelfLifeOfChocolate=0;
    // prompts user for shelf life of box of chocolate
    cout << "Enter the shelf life for a box of chocolates: " ;
    cin >> shelfLifeOfChocolate;
    int outsideTemp=0;
    // prompts user for outside temperature
    cout << "Enter the outside tempurature: ";
    cin >> outsideTemp;
    
    // decreate shelf life by 4 if temp is greater than 90
    if (outsideTemp>90)
    {
        
        shelfLifeOfChocolate =  shelfLifeOfChocolate-4;
        if(shelfLifeOfChocolate<0)
        {
            // negative would be invalid
            shelfLifeOfChocolate=0;
        }
    }
    cout << shelfLifeOfChocolate<<endl;
}

void ex03()
{
    int areaOfASquare=0;
    // prompt user for area of square
    cout << "Enter the area of a square ";
    cin >> areaOfASquare;
    double diagonalOfSquare=0;
    diagonalOfSquare = sqrt(2*areaOfASquare);
    // output the diagonal of square
    cout << "The diagonal of a square is " << diagonalOfSquare <<endl;
    
    char csResponse ='y';
    // prompt user for yes or no response
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
    
    // initialize character tab
    char tab='\t';
    
    // declare string variable mailing address
    string mailingAdress;
    cout << "Enter your mailing address ";
    cin.ignore();
    getline(cin,mailingAdress);
    cout << "Your mailing adress is " <<mailingAdress << endl;
    
    // initialize string variable to empty string
    string stur="";
    
    
}

void ex04()
{
    
    int answer=0;
    // prompt user for number between 1 and 10
    cout << "Enter a number between 1 and 10: ";
    cin >> answer;
    if (answer>=1 && answer <=10)
    {
        cout << "Your answer is correct " << answer <<endl;
    }
    else
    {
        while(answer<1 || answer>10)
        {
            cout << "Number is invalid, please try again: " ;
            cin >> answer;
            
        }
    }
    
    // output the sum of the cubes from 1 to the number given
    int answerCubed=0;
    for(int i=1; i<=answer; i++)
    {
       answerCubed=answerCubed+(i*i*i);
    }
    
    cout << "Your answer cubed is " << answerCubed <<endl;
    
    int count=0;
    // output number of *
    do
     {
         cout << "*" ;
        count+=1;
        
     }while(count<answer);
    cout<<endl;
    
    // output even numbers from 0 to 40
    for(int i=0; i<=40; i++)
    {
        if(i%2==0)
        {
            cout << i << " ";
        }
    }
    
    // calls function that doubles integer
    int result=timestwo(answer);
    cout << "result of timestwo: " << result <<endl;
    
    srand(time(NULL));
    int x=rand()%100;
    int y=rand()%100;
    
    // calls function that sums integers
    int result2=add(x,y);
    cout << "Result of v1+v2: " <<result2 <<endl;
    
    // calls function that adds one to its perameters
    int result3=50;
    add1(result3);
    cout <<result3 <<endl;
}

// function that doubles an integer
int timestwo(int value)
{
    return value*2;
}

// function that takes sum of two integers
int add (int v1, int v2)
{
    return  v1+v2;
}

// function that adds one to its perameters
void add1(int& p)
{
    p= p+1;
}


void ex05()
{
    const int number=5;
    int integer[number];
    int size=0;
    cout << "Enter 5 numbers "<< endl;
    // loop that takes 5 integers and stores in an array
    for (int i=0; i<number; i++)
    {
       cin >> integer[i];
    }
 
    int sum=0;
    int product=1;
    // gets sum and product of values in the array
    for (int i=0; i<number; i++)
    {
        sum+=integer[i];
        product*=integer[i];
        
    }
    cout << "The sum is "<<sum <<endl;
    cout << "The prodct is "<<product <<endl;
    
    // calls function that outputs 5 values in the array
    outputarray(integer, number);
    cout <<endl;
    
    // calls function and tells if value is in origional array
    outputarray2(integer, number);
}

// function that outputs values of array
void outputarray(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] <<" ";
        
    }
}

// function that tells if value is in origional array
void outputarray2(int array[], int size)
{
    int value=0;
    cout << "Enter a value ";
    cin >> value;
    bool hasvalue=false;
    for (int i=0; i<size; i++)
    {
        if(value==array[i])
        {
            hasvalue=true;
        }
        
        
    }
    if(hasvalue)
    {
        cout << "Yes, the array has the value " <<value <<endl;
    }
    else
    {
        cout << "No, the array does not have the value "<< value <<endl;
    }
}



