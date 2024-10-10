#include <iostream>

int main()
{

    int array[5] = { 3, 5, 3, 7, 9};

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total = total + array[i];
    }

    std::cout << "Total =  " << total << std::endl;

    std::cout << "Mean = " << total / 5 << std::endl;

    return 0;
}