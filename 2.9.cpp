#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'armstrongNumber' function below.
 *
 * The function is expected to return a STRING ARRAY.
 * The function accepts INTEGER ARRAY arr as parameter.
 *
 */

vector<string> armstrongNumber(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        int originalNum = num;
        int sum = 0;
       
        while (num > 0) {
            int digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
       
        if (sum == originalNum) {
            result.push_back("It is an ARMSTRONG number");
        } else {
            result.push_back("It is NOT an ARMSTRONG number");
        }
    }
    return result;
}

int main() {
    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    vector<string> result = armstrongNumber(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
