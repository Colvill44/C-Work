#include <stdio.h>
#include <stdlib.h>

#define GUESS_THRESHOLD 0.000000001
#define EXIT_VALID 0
#define EXIT_BADINPUT 1
#define EXIT_DISCRIMINANT_NEGATIVE 2
#define EXIT_DISCRIMINANT_ZERO 3

int main();
double readDouble();
double getAbs(double d);
double getSqrt(double d);
double getRoot(double a, double b, double c, int positive);


// I rewrote everything in the template so that I could better understand the program. 

int main(){
  
  // Declare variables
  double a, b, c, rootResult;

  // Get Coefficients
  printf("Enter values for a, b and c:\n");

  // Get A
  printf("A: ");
  a = readDouble();

  // Get B
  printf("B: ");
  b = readDouble();

  // Get C
  printf("C: ");
  c = readDouble();

  // Print Root 1
  rootResult = getRoot(a, b, c, 1);
  printf("Root +: %lf\n", rootResult);

  // Print Root 2
  rootResult = getRoot(a, b, c, 0);
  printf("Root -: %lf\n", rootResult);

  return 0;
}

double readDouble(){
  // Declare holder
  double d;

  // Get input
  scanf("%lf", &d);

  // Return the variable storing the input
  return d;
}

double getAbs(double d){
  if(d < 0){
    return (-1 * d);
  }
  return d;
}

double getSqrt(double d){
  // Declare Guess and Distance
  double guess = d;
  double distance = d / 2;

  // Validate d
  if(d < 0){
    printf("Cant Accept Negative Number!");
    exit(EXIT_BADINPUT);
  }
  else if(d == 0){
    return 0;
  }
  else{
    // Do the work
    while(getAbs((guess * guess) - d) > GUESS_THRESHOLD){
      if((guess * guess) < d){
        guess = guess + distance;
      }
      else{
        guess = guess - distance;
      }
      distance = distance / 2;
    }
  }
  return guess;
}

double getRoot(double a, double b, double c, int positive){
  // Get the discriminant
  double D = (b * b) - (4 * a * c);

  // Check Conditions
  if(D > 0){
    if(positive == 1){
      return ((-b) + (getSqrt(D))) / (2 * a);
    }
    else{
      return ((-b) - (getSqrt(D))) / (2 * a);
    }
  }
  else if(D == 0){
    exit(EXIT_DISCRIMINANT_ZERO);
  }
  else{
    exit(EXIT_DISCRIMINANT_NEGATIVE);
  }
}


