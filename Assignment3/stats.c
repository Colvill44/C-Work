#include <stdio.h>
 
#define MAX_ARRAY_SIZE 1000000
#define MIN_ARRAY_SIZE 2

int main();
double getSum(double numbers[], int size);
double getMax(double numbers[], int size);
double getMin(double numbers[], int size);
double getArithmetic(double numbers[], int size);
double getHarmonic(double numbers[], int size);
double getVariance(double numbers[], int size);

int main(void) {

  // Declare variables
  int i = 0;
  int size = 0;
  double numbers[MAX_ARRAY_SIZE];

  printf("Enter a number followed by the enter key (Signal EoF to stop)\n");
  
  // Loop until EOF
  while(1){
    if(scanf("%lf", &numbers[i]) == EOF && size >= (MIN_ARRAY_SIZE - 1)){
      size++;
      break;
    }
    i++;
    size++;
    
  }
  
  // Print the Array
  printf("You entered:\n");
  for(int i = 0; i < size; i++){
    printf("%lf\n", numbers[i]);
  }

  // Print Calculations
  printf("The count of numbers read from the input is %9d\n", size);

  printf("The sum of these numbers is                 %20.10f\n", getSum(numbers, size));

  printf("The max and the min of these numbers are    %20.10f and %20.10f\n", getMax(numbers, size), getMin(numbers, size));

  printf("The arithmetic and harmonic means are       %20.10f and %20.10f\n", getArithmetic(numbers, size), getHarmonic(numbers, size));

  printf("The variance is                             %20.10f\n", getVariance(numbers, size));

  return 0;
}

double getSum(double numbers[], int size) {
  
  double sum = 0;
  
  for(int i = 0; i < size; i++){
    sum += numbers[i];
  }
  
  return sum;
}

double getMax(double numbers[], int size) {
  
  double max = numbers[0];
  
  for(int i = 1; i < size; i++){
    if(numbers[i] > max){
      max = numbers[i];
    }
  }

  return max;
}

double getMin(double numbers[], int size) {

  double min = numbers[0];
  
  for(int i = 1; i < size; i++){
    if(numbers[i] < min){
      min = numbers[i];
    }
  }

  return min;
}

double getArithmetic(double numbers[], int size) {

  double mean = 0;
  double sum = 0;
  
  for(int i = 0; i < size; i++){
    sum += numbers[i];
  }

  mean = sum / size;
  
  return mean;
}

double getHarmonic(double numbers[], int size) {

  double mean = 0;
  double sum = 0;

  for(int i = 0; i < size; i++){
    sum += (1 / numbers[i]);
  }

  mean = size / sum;
  
  return mean;
}

double getVariance(double numbers[], int size) {
  
  double mean = getArithmetic(numbers, size);
  double sum = 0;
  double variance = 0;

  for(int i = 0; i < size; i++){
    sum += ((numbers[i] - mean) * (numbers[i] - mean));
  }
  
  variance = sum / size;

  return variance;
}
