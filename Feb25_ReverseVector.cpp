#include "std_lib_facilities.h"

// first reverse function - that returns a new vector
vector<int> reverse_function1(const vector<int>& v);
// second reverse function - modifies the original vector
void reverse_function2(vector<int>& v);

// print function to print a vector
void print(const string& label, const vector<int>& v);

// main function
int main()
{
    vector<int> inputVector;  // = {1,3,5,7,9};
    int count, num;

    cout << "Enter how many values you want to input: " << endl;
    cin >> count;

    // read values one by one
    cout << "Enter values one by one: " << endl;
    while(count > 0)
    {
        cin >> num;
        inputVector.push_back(num);
        count--;
    }
    print("Input vector: \n", inputVector);

    // call 1st reverse function -> doesn't modify input vector, returns new vector
    vector<int> output1 = reverse_function1(inputVector);
    print("\nReversed once: \n", output1);

    // call 2nd reverse function -> modifies the input vector
    reverse_function2( output1 );
    print("\nReversed twice: \n", output1);

    return 0;
}

// reverse function# 1: returns a new vector, doesn't modify the input vector
vector<int> reverse_function1(const vector<int>& v)
{
    vector<int> reversedVector;  // new vector to return

    // read from the last element and add it to new vector
    for(int i = v.size()-1; i >= 0; i--)
        reversedVector.push_back(v[i]);

    return reversedVector;
}

// reverse function# 2: modifies the input vector
void reverse_function2(vector<int>& v)
{
    int length = v.size();

    // call swap function that swaps 2 integers in place
    for(int i = 0; i < length/2; i++)
        swap(v[i], v[length-1-i]);      // swap 1st and last elements and until the middle point
}

//print function to print a vector
void print(const string& label, const vector<int>& v)
{ 
    cout << label << "( ";
    for (int i = 0; i < v.size(); ++i) 
        cout << v[i] << " ";       
    cout << ")\n";
}
