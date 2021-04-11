/******************************************************************************
The program calculates the average test score using user's input scores for 5
tests. 

@version 10/4/2020
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double Test1, Test2, Test3, Test4, Test5;
    
    cout << "Enter your score for each of the tests" << endl;
    cin >> Test1 >> Test2 >> Test3 >> Test4 >> Test5;

    double averageScore = (Test1 + Test2 + Test3 + Test4 + Test5) / 5;

    cout << "Your average score is " << fixed << setprecision(1) << averageScore;
    
    return 0;
}

