/********************************************************************
// fracturing.c
// Author: Jackson Boemler
// Date: 08-29-2024
// Class: COP 3223, Professor Parra
// Purpose: To perform a variety of geometry-related functions.
// Input/Output: See individual functions.
//******************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Arguments: None
// Input: a real number
// Output: nothing
// Return: a double
double askForUserInput() {
    double input;
    scanf(" %lf", &input);
    return input;
}

// Arguments: none
// Input: four numbers, each pair a coordinate (x1, x2, y1, y2)
// Output: a statement representing each coordinate, and the distance between
// Return: the distance between the points as a double
double calculateDistance() {
    // distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    printf("\n");

    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    double result = 0;

    printf("Point #1 entered: x1 = %0.3f; y1 = %0.3f", x1, y1);
    printf("\nPoint #2 entered: x2 = %0.3f; y2 = %0.3f", x2, y2);

    result = sqrt(pow((x2 - x1), 2)+pow((y2 - y1), 2));

    return result;
}

// Arguments: one double
// Input: none
// Output: a brief statement containing the double
// Return: none
void calcDistPrint(double dist) {
    printf("\nThe distance between the two points is %0.3f", dist);
}

// The two points define the DIAMETER of the circle
// Arguments: none
// Input: four numbers, each pair a coordinate (x1, x2, y1, y2)
// Output: a brief statement mentioning the coordinates, and the perimeter
//        of the circle formed by them
// Return: unrelated double constant
double calculatePerimeter() {
    // perimeter = PI * distance
    double diameter = calculateDistance();
    double perimeter = PI * diameter;

    printf("\nThe perimeter of the city encompassed by your request is %0.3f", perimeter);

    return 2.0;
}

// Arguments: none
// Input: four numbers, each pair a coordinate (x1, x2, y1, y2)
// Output: a brief statement mentioning the coordinates and the area of the
//        circle formed by them
// Return: unrelated double constant
double calculateArea() {
    // perimeter = PI * (distance/2)^2
    double radius = (calculateDistance() / 2);
    double area = PI * pow(radius, 2);

    printf("\nThe area of the city encompassed by your request is %0.3f", area);

    return 2.0;
}

// Arguments: none
// Inputs: four numbers, each pair a coordinate (x1, x2, y1, y2)
// Output: a brief statement including the coordinates and the distance on the
//        x-axis between them
// Return: unrelated double constant
double calculateWidth() {
    // width = x2 - x1
    printf("\n");

    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %0.3f; y1 = %0.3f", x1, y1);
    printf("\nPoint #2 entered: x2 = %0.3f; y2 = %0.3f", x2, y2);
    printf("\nThe width of the city encompassed by your request is %0.3f", width);

    return 3.0;
}

// Arguments: none
// Inputs: four numbers, each pair a coordinate (x1, x2, y1, y2)
// Output: a brief statement including the coordinates and the distance on the
//        y-axis between them
// Return: unrelated double constant
double calculateHeight() {
    // height = y2 - y1
    printf("\n");

    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    double height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %0.3f; y1 = %0.3f", x1, y1);
    printf("\nPoint #2 entered: x2 = %0.3f; y2 = %0.3f", x2, y2);
    printf("\nThe height of the city encompassed by your request is %0.3f", height);

    return 3.0;
}

int main(int argc, char **argv) {
    calcDistPrint(calculateDistance());

    calculatePerimeter();
    calculateArea();

    calculateWidth();
    calculateHeight();

    return 0;
}