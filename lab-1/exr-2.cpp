#include <iostream>
#include <string>
using namespace std;

class Batsman {
private:
    int batsman_code;
    string batsman_name;
    int total_innings;
    int notout_innings;
    int total_runs;
    float batting_avg;

    void calcavg() {
        if (total_innings - notout_innings != 0) {
            batting_avg = static_cast<float>(total_runs) / (total_innings - notout_innings);
        } else {
            batting_avg = 0; // To avoid division by zero
        }
    }

public:
    // Function to accept values from user
    void readdata() {
        cout << "Enter batsman code (4 digits): ";
        cin >> batsman_code;
        cin.ignore();
        cout << "Enter batsman name: ";
        getline(cin, batsman_name);
        cout << "Enter total innings played: ";
        cin >> total_innings;
        cout << "Enter number of not-out innings: ";
        cin >> notout_innings;
        cout << "Enter total runs scored: ";
        cin >> total_runs;

        calcavg();


    void displaydata() const {
        cout << "\nBatsman Details:\n";
        cout << "Batsman Code: " << batsman_code << endl;
        cout << "Batsman Name: " << batsman_name << endl;
        cout << "Total Innings: " << total_innings << endl;
        cout << "Not-out Innings: " << notout_innings << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Batting Average: " << batting_avg << endl;
    }
};

int main() {
    Batsman player;

    // Accept and display the details of the batsman
    player.readdata();
    player.displaydata();

    return 0;
}
