#include <iostream>
#include <vector>
#include <string>

using namespace std;

static void printArr(string tag, const vector<string> &arr, int size)
{
    cout << "\n"
         << tag << " [";

    for (int i = 0; i < size; i++)
    {
        string space = ", ";
        cout << arr[i] << (i == (size - 1) ? "" : space);
    }

    cout << "]";
}

vector<std::string> fizzbuzz(int n)
{
    vector<std::string> v;
    for (int i = 1; i <= n; i++)
    {
        if ((i % 3 == 0) && ((i % 5 == 0)))
        {
            v.push_back("FizzBuzz");
            continue;
        }
        else if (i % 3 == 0)
        {
            v.push_back("Fizz");
            continue;
        }
        else if (i % 5 == 0)
        {
            v.push_back("Buzz"); 
            continue;
        }

        v.push_back(to_string(i));
    }

    return v;
}

int main()
{
    vector<std::string> arr = fizzbuzz(20);
    printArr("Output", arr, arr.size());

    return 0;
}