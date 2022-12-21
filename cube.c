#include <stdio.h> 

float cubeVolume(float); 



int main(void) 
{ 
    float length = 0;
    printf("Enter Length of Cube's Side: ");
    scanf("%f", &length);
    printf("Cubes Volume: %f \n", cubeVolume(length)); 
} 

float cubeVolume(float length) 
{ 
    float volume = length * length * length;

    return volume;
}