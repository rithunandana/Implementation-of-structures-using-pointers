#include <stdio.h>
struct patient
{
   char name[50];
   int age;
   float weight;
   float height;
};

int main()
{
    struct patient *patientPtr, patient1;
    patientPtr = &patient1; 

    printf("Enter patients name: ");
    scanf("%s", &patientPtr->name);

    printf("Enter patients age: ");
    scanf("%d", &patientPtr->age);

    printf("Enter patients weight: ");
    scanf("%f", &patientPtr->weight);

    printf("Enter patients height: ");
    scanf("%f", &patientPtr->height);

    printf("Displaying patient details:\n");
    printf("Name: %s\n", patientPtr->name);
    printf("Age: %d\n", patientPtr->age);
    printf("weight: %0.2f\n", patientPtr->weight);
    printf("Age: %0.2f\n", patientPtr->height);
    return 0;
}