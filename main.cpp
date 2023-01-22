// Remove If Found Problem

// Write the function removeIfFound() which removes all copies of a particular value from an array.
// THe function returns the number of values removed.
// Here's a short example:

// The example shown here removes all copies of the value 10 from the array a.
// Both a and size are modified by the function. In this case, since there are two copies of 10,
// size is changed to 6 and the function returns 2. Be especially careful when writing your code
// that you don't skip values that are contiguous in the array.
// For instance, if you remove 2 from {1, 2, 2, 2, 1}, you should end up with {1, 1}.

#include <iostream>
using namespace std;

void print(int *a, size_t &size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int removeIfFound(int *a, size_t &size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            for (int j = i; j < size; j++)
            {
                a[j] = a[j + 1];
            }
            size--;
            count++;
        }
    }
    return count;
}

// main() to test the function
int main()
{
    int src[50] = {10, 54, 81, 45, 95, 25, 10, 95};
    size_t size = 8;

    cout << "before: ";
    print(src, size);

    int removed = removeIfFound(src, size, 10);
    cout << "after: ";
    print(src, size);
    cout << "removed: " << removed << endl;
}