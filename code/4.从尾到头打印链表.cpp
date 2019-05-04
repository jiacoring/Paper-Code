#include <iostream>
#include <list>

using namespace std;

void print_reverse_list(list<int> link_list) {
    if (!link_list.empty()) 
        for (auto it = link_list.crbegin(); it != link_list.crend(); ++it) 
            cout<<*it<<endl;   
}

int main() {
    list<int> link_list = {1, 2, 3, 4, 5};
    // print_reverse_list(link_list);
    return 0;
}
