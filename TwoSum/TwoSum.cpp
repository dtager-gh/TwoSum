// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> positions(vector<int>& numbers, int target ){
    int beginning = 0; //set a pointer at the beginning
    int end = numbers.size() - 1;//set a pointer at the end

    while (beginning < end) {//they shouldnt cross but if they do
        int sum = numbers[beginning] + numbers[end];

        if (sum == target) {
            return { beginning + 1, end + 1 };//add 1 for the 1 index asked for
        }
        else if(sum < target){ //if the sum is too small move the beginning pointer over one (because the list is sorted) to make sum larger 
            beginning++;
        }
        else {
            end--;//if the sum is too big this moves the pointer on the end to the left to make sum smaller. (because the list is sorted)
        }
    }
    return{ 0,0 };//just in case it should return [o,o] because there is no answer
}


int main()
{
    vector<int> numbers1 = { 2, 7, 11, 15 };
    int target1 = 9;

    vector<int> answer1 = positions(numbers1, target1);
    cout << "Example 1: numbers = { 2, 7, 11, 15 } target = 9" << endl;
    cout << "Answer: [" << answer1[0] << ", " << answer1[1] << "]" << endl << endl;

    vector<int> numbers2 = { 2, 3, 4 };
    int target2 = 6;

    vector<int> answer2 = positions(numbers2, target2);
    cout << "Example 2: numbers = { 2, 3, 4 } target = 6" << endl;
    cout << "Answer: [" << answer2[0] << ", " << answer2[1] << "]" << endl << endl;

    vector<int> numbers3 = { -1, 0 };
    int target3 = -1;

    vector<int> answer3 = positions(numbers3, target3);
    cout << "Example 3: numbers = { -1, 0 } target = -1" << endl;
    cout << "Answer: [" << answer3[0] << ", " << answer3[1] << "]" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
