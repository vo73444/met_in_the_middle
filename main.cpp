#include <iostream>
#include <string>
#include <vector>

using namespace std;

float median(vector<int> set){
    float med = 0;

    // if(set.size() % 2 != 0){
        int i = (set.size()) /2;

        med = set[i];

        return med;
    // }
}

int main(){

    cout << "\nPlease enter the data set: ";

    string data;

    vector<int> dataset;

    getline(cin, data);

    for(int i = 0; i < data.size(); i++){
        // if(data[i] == ','){
            
        // }
        // else{
        //     dataset.push_back(stoi(data.substr(i)));
        
        // }

        switch (data[i]){
        case ',':
            break;
        default:
            dataset.push_back(stoi(data.substr(i)));
            break;
        }

    }

    for(int j = 0; j < dataset.size(); j++){
        cout << dataset[j] << " ";
    }

    cout << "\nThe median of the dataset is " << median(dataset) << "\n";

    return 0;
}
