// COMSC-210 | Lab 15 | Niko Dittmar
#include <fstream>
#include <iostream>

using namespace std; 

class Movie {
private:
    string title;
    string screenwriter;
    int yearReleased;
public:
    // Getters and setters.
    string getTitle() {
        return title;
    }
    void setTitle(string t) {
        title = t;
    }
    string getScreenwriter() {
        return screenwriter;
    }
    void setScreenwriter(string s) {
        screenwriter = s;
    }
    int getYearReleased() {
        return yearReleased;
    }
    void setYearReleased(int y) {
        yearReleased = y;
    }

    void print() {
        cout << "Movie: " << title << "\n";
        cout << "   Year released: " << yearReleased << "\n";
        cout << "   Screenwriter: " << screenwriter << "\n";
    }
};

int main() {
    // Open input file.
    ifstream inputFile("input.txt");

    // Make sure the file was successfully opened.
    if (!inputFile.is_open()) {
        cout << "We ran into an error opening your input file! Please try again.";
        return 1;
    }

    vector<Movie> movies;




    return 0;
}