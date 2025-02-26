#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int q;  // Number of queries
    cin >> q;
    
    map<string, int> studentMarks;  // Map to store student marks

    // Process each query
    for (int i = 0; i < q; i++) {
        int queryType;
        string name;
        cin >> queryType;

        if (queryType == 1) {
            int marks;
            cin >> name >> marks;
            studentMarks[name] += marks;  // Add marks to the student
        } 
        else if (queryType == 2) {
            cin >> name;
            studentMarks.erase(name);  // Erase the student from the map
        } 
        else if (queryType == 3) {
            cin >> name;
            // If student exists, print marks, else print 0
            if (studentMarks.find(name) != studentMarks.end()) {
                cout << studentMarks[name] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
