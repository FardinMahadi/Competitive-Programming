// In the name of Allah, the Most Gracious, the Most Merciful
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};
    v1.push_back(4);

    cout << "capacity = " << v1.capacity() << endl;
    v1.pop_back();

    v1.shrink_to_fit();
    cout << "v[1] = " << v1[1] << endl
         << "front = " << v1.front() << endl
         << "back = " << v1.back() << endl
         << "size = " << v1.size() << endl
         << "capacity = " << v1.capacity() << endl;

       return 0;
}