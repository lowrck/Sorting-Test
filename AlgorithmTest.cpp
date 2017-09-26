#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

vector<int> sortinghat(int);

int main() {
    int count1;
    string input1;
    cout << "how many numbers are you inputting " << endl;
    getline(cin, input1);
    count1 = stoi(input1);
    vector<int> output = sortinghat(count1);
    for(int output1 : output)
        cout << output1 << " in order" << endl;
    ofstream outputfile;
    outputfile.open ("/Users/lewismarx/Documents/output_1.txt");
   /* for(int output1 : output)
    *    outputfile << output1 << endl;
    */
    outputfile.close();
    return 0;
}

vector<int> sortinghat(int count1) {
     vector<int> storage;
    for(int i = 0; i < count1; i++) {
        int input1;
        string num1 = "1";
        getline(cin, num1);
        storage.push_back(stoi(num1));
        cout << i << endl;
    }
    sort(storage.begin(), storage.end());
    return storage;
}