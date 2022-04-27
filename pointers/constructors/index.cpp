#include <iostream>
#include <string.h>

using namespace std;

struct Node{
        string name;
        int age;
        Node(string n, int a){
            // cout<<n<<endl;
            // name = strdup(n);
            name = n;
            age = a;
        }
    };

int main() {
    int a = 23;
    // char *n = a;
    Node node1("peace",20), node2(node1); // or node2 = node1
    cout<<node1.name<<endl<<node2.age<<endl;

    return 0;
}