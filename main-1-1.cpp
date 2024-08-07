#include <iostream>
extern double arrayMin(double* array, int size);
int main(){
    double array[5]={1,2,3,4,5};
    double min= arrayMin(array, 5);
}
