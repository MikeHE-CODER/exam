#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main(){
    double array[5]={1,2,3,4,5};
    modifyArray(array,5,3);
}
