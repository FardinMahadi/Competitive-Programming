#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decimalToBinary(unsigned int n)
{
    string binary = "";

    for (int i = 0; i < 31; i++)
    {
        binary = (char)((n % 2) + '0') + binary;
        n = n / 2;
    }
    binary = "0" + binary;

    return binary;
}

string addBinary(string a, string b)
{
    string result = "";
    int carry = 0, i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0)
    {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;
        int sum = bitA + bitB + carry;
        result = (char)((sum % 2) + '0') + result;

        i--;
        j--;
    }

    return result;
}

int binaryToDecimal(string binary)
{
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++)
    {
        int bit = binary[i] - '0';
        decimal += bit * pow(2, length - i - 1);
    }

    return decimal;
}

int main()
{
    unsigned long int a, b;
    string binAdd;
    cin >> a >> b;

    binAdd = addBinary(decimalToBinary(a), decimalToBinary(b));

    cout << binaryToDecimal(binAdd) << endl;

    return 0;
}
