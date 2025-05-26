// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <list>
using namespace std;

void print_list(list<int> &ll)
{
    for (auto it = ll.begin(); it != ll.end(); ++it)
        cout << *it << "\t";
    cout << endl;
}

int main()
{
    list<int> nums = {1, 2, 3, 4, 5};
    print_list(nums);
    cout << "Size = " << nums.size() << endl;

    list<int> nums2 = nums;
    print_list(nums2);

    cout << "Front = " << nums.front() << "\n"
         << "Back = " << nums.back() << endl;
    cout << boolalpha << nums.empty() << endl;

    return 0;
}

/**
 * size(), max_size()
 * =
 * front(), back()
 * empty()
 * begin(), end(), rbegin(), rend()
 * insert(), erase(), remove()
 * clear()
 * push_back(), push_front(), pop_back(), pop_front()
 */