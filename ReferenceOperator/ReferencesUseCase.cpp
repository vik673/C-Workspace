/*
 a. Function parameter(Pass by reference)
  modify the original variable directy
without copying.alignas

*/

void swap(int& a, int & b)
{
    int temp = a;
    a=b;
    b = temp;
}

int main()
{
    int x=5, y = 6;
    swap(x,y); // x= 10, y =5
}

/*
b. Return by reference
Avoid coping the large object

std::string& getLongString()
{
static std::string s ="A very lng string";
return s; // return a reference to s
}
*/

/*
C. Range based for-loop
std::vector<int> nums = {1,2,3};
for(int& num : nums)
{
num *=2; // double each lement
}
// nums become {2,4,6}

*/

/*
D. Const reference
read only access to avoid unnecessary copies
void print(const std::string& s)
{
cout << s; // s is read-only
}

E. Use const Reference to prevent modification
const int& ref = x;

F. Temporary Object
A const reference can bind to a temporary
const int& ref = 42;
*/