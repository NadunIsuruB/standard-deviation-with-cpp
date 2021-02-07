// standard deviation with cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float CalMean(int &_count, float *_array);
float StandardDev(int& _count, float *_array);

float Mean;
float SD;

int main()
{

    int count = 0;
    float *array;

    std::cout << "Enter count of the array: ";
    std::cin >> count;

    std::cout << "Enter your data set: " << std::endl;
    array = new float[count];

    for (int i = 0; i < count; i++)
    {
        std::cin >> *(array + i);
    }
    std::cout <<std::endl;
   Mean = CalMean(count, array);
   std::cout <<"Mean: " << Mean << std::endl;
   SD = StandardDev(count, array);
   std::cout << "Standard Deviation: " << SD << std::endl;
} //Main method

float CalMean(int &_count, float *_array)
{
    float mean = 0.0;
    float arSum = 0.0;

    for (int i = 0; i < _count; i++)
    {
        arSum  += *(_array + i);
    }
    mean = (arSum)/_count;

    return mean;
} // find the avarage value in dataset

float StandardDev(int& _count, float *_array)
{
    float _mean = Mean;
    float _Variation = 0;


    for (int i = 0; i < _count; i++)
    {
        _Variation += pow(*(_array + i), 2);

        return sqrt(_Variation / (_mean - 1));
    }

}//Calculate standard deviation
