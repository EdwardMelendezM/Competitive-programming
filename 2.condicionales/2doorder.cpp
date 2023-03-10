#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> usernames;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (usernames.count(name) == 0) {
            // El nombre de usuario no está en el mapa
            usernames[name] = 1;
            cout << "OK" << endl;
        } else {
            // El nombre de usuario ya está en el mapa
            int count = usernames[name];
            string new_name;

            do {
                new_name = name + to_string(count);
                count++;
            } while (usernames.count(new_name) != 0);

            usernames[new_name] = 1;
            cout << new_name << endl;
        }
    }

    return 0;
}