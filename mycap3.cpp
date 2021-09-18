/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;
    std::cout << "enter your age" << std::endl;
    std::cin >> age;
    if(age>=18){
        cout<<"\nYou are eligible for voting";
    }
    else{
        cout<<"\n You are not eligible for voting"
    }

    return 0;
}
