#include <iostream>
double* duplicateArray(double* array, int size){
    double * newarray=new double[size];
    for (int i=0;i<size;i++){
        newarray[i]=array[i];
    }
    return newarray;
}
