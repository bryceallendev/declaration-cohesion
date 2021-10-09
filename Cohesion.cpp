/*
    Cohesion.cpp

    Ordering and variable cohesion
*/

#include <vector>
#include <string>

struct GradeItem {
    std::vector<std::string> names;
    std::vector<int> scores;
    double average;
};

int main() {

    // variable ordering & style #1
    {
        std::vector<std::string> exerciseNames;
        std::vector<std::string> testNames;
        std::vector<std::string> quizNames;

        std::vector<int> exercises;
        std::vector<int> tests;
        std::vector<int> quizzes;

        double exerciseAverage;
        double testAverage;
        double quizAverage;
    }
    
    // variable ordering & style #2
    {
        std::vector<std::string> exerciseNames, testNames, quizNames;
        std::vector<int> exercises, tests, quizzes;
        double exerciseAverage, testAverage, quizAverage;
    }
    
    // variable ordering & style #3
    {
        //exercises
        std::vector<std::string> exerciseNames;
        std::vector<int> exercises;
        double exerciseAverage;
        
        //tests
        std::vector<std::string> testNames;
        std::vector<int> tests;
        double testAverage;
        
        //quizzes
        std::vector<std::string> quizNames;
        std::vector<int> quizzes;
        double quizAverage;
    }

    // solution
    {
        GradeItem exercises;
        GradeItem tests;
        GradeItem quizzes;
    }

    return 0;
}
