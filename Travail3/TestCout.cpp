#include <iostream>
#include <string>
void main() {

    std::list<*int> pointersList;
    *int i = 100;
    pointersList.push_back(i);

for(int a = 0; a < pointersList.size(); a ++)
   {
    std::list<int*>::iterator i = pointersList.begin();

    advance(i, a);
    int* totry = *i;
    cout << *totry;
    cout << ",";
    }

}
