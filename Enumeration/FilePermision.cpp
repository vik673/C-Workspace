#include<iostream>

using namespace std;

// File Permission
// Enums can be with bitwise
// operations to respeent
// combinations of flags.

enum class FilePermission
{
    Read = 1,
    Write = 2,
    Execute = 3
};

int main()
{
      FilePermission permission = static_cast<FilePermission>(static_cast<FilePermission>(FilePermission::Read) | static_cast<int>(FilePermission::Write));
      
      if(static_cast<int>(permission) & static_cast<int>(FilePermission::Read))
      {
        cout << "Read permision granted. " << endl;
      }

      if(static_cast<int>(permission) & static_cast<int>(FilePermission::Write))
      {
        cout << "Write permission granted." << endl;
      }

      return 0;
}