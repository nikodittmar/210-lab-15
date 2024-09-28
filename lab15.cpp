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

    // Movie vector to hold movies.
    vector<Movie> movies;

    string line;

    while (getline(inputFile, line)) {
        Movie movie;
        movie.setTitle(line);

        getline(inputFile, line);
        movie.setYearReleased(stoi(line));

        getline(inputFile, line);
        movie.setScreenwriter(line);

        movies.push_back(movie);        
    }

    for (int i = 0; i < movies.size(); i++) {
        movies[i].print();
    }

    return 0;
}