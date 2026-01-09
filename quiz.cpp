#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Question {
    string question;
    vector<string> options;
    char correctAnswer;
    string explanation;
    int points;
};

class Quiz {
private:
    vector<Question> questions;
    int score;
    int totalPossible;
    string playerName;
    
    void initializeQuestions() {
        // C++ Programming Questions
        questions = {
            {
                "What is the correct way to declare a constant in C++?",
                {"A) const int x = 5;", "B) int const x = 5;", "C) constant int x = 5;", "D) Both A and B"},
                'D',
                "Both 'const int x = 5;' and 'int const x = 5;' are valid ways to declare constants in C++.",
                10
            },
            {
                "Which operator is used for dynamic memory allocation in C++?",
                {"A) malloc", "B) new", "C) alloc", "D) create"},
                'B',
                "The 'new' operator is used for dynamic memory allocation in C++.",
                10
            },
            {
                "What does OOP stand for?",
                {"A) Object-Oriented Programming", "B) Object-Oriented Process", 
                 "C) Objective-Oriented Programming", "D) Object-Oriented Protocol"},
                'A',
                "OOP stands for Object-Oriented Programming.",
                5
            },
            {
                "Which of these is not a valid access modifier in C++?",
                {"A) public", "B) private", "C) protected", "D) internal"},
                'D',
                "C++ has public, private, and protected access modifiers. 'internal' is not valid in C++.",
                10
            },
            {
                "What is the output of: cout << 5 / 2;",
                {"A) 2", "B) 2.5", "C) 2.0", "D) 3"},
                'A',
                "Integer division truncates the decimal part, so 5/2 = 2.",
                10
            },
            {
                "Which data structure uses LIFO (Last-In-First-Out)?",
                {"A) Queue", "B) Stack", "C) Array", "D) Linked List"},
                'B',
                "Stack uses LIFO (Last-In-First-Out) principle.",
                10
            },
            {
                "What is the time complexity of accessing an element in an array by index?",
                {"A) O(n)", "B) O(log n)", "C) O(1)", "D) O(n²)"},
                'C',
                "Array access by index is constant time O(1).",
                15
            },
            {
                "Which STL container maintains elements in sorted order?",
                {"A) vector", "B) list", "C) set", "D) unordered_map"},
                'C',
                "set maintains elements in sorted order.",
                15
            },
            {
                "What is the purpose of a destructor in C++?",
                {"A) Initialize objects", "B) Allocate memory", 
                 "C) Clean up resources", "D) Copy objects"},
                'C',
                "Destructors are used to clean up resources when an object is destroyed.",
                10
            },
            {
                "Which keyword is used to inherit a class in C++?",
                {"A) inherits", "B: extends", "C) : (colon)", "D) derives"},
                'C',
                "In C++, inheritance is specified using a colon after the class name.",
                10
            }
        };
        
        // Shuffle questions for variety
        srand(time(0));
        random_shuffle(questions.begin(), questions.end());
    }
    
    void displayWelcome() {
        cout << "\n========================================\n";
        cout << "         C++ PROGRAMMING QUIZ          \n";
        cout << "========================================\n";
        cout << "\nWelcome to the C++ Quiz Challenge!\n";
        cout << "Test your knowledge of C++ programming.\n\n";
        
        cout << "Enter your name: ";
        getline(cin, playerName);
        
        cout << "\nHello, " << playerName << "!\n";
        cout << "Rules:\n";
        cout << "1. Each question has 4 options (A, B, C, D)\n";
        cout << "2. Enter the letter of your choice\n";
        cout << "3. Points vary based on question difficulty\n";
        cout << "4. Try to get the highest score!\n";
        cout << "========================================\n";
    }
    
    void askQuestion(int questionNum, const Question& q) {
        cout << "\nQuestion " << questionNum << " (" << q.points << " points):\n";
        cout << q.question << "\n\n";
        
        for (const auto& option : q.options) {
            cout << option << "\n";
        }
        
        cout << "\nYour answer (A/B/C/D): ";
    }
    
    bool validateAnswer(char answer) {
        return answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D' ||
               answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd';
    }
    
    void displayResult(bool correct, const Question& q) {
        if (correct) {
            cout << "\n✅ Correct! +" << q.points << " points\n";
            score += q.points;
        } else {
            cout << "\n❌ Incorrect!\n";
        }
        cout << "Explanation: " << q.explanation << "\n";
    }
    
    void displayScore() {
        totalPossible = 0;
        for (const auto& q : questions) {
            totalPossible += q.points;
        }
        
        double percentage = (totalPossible > 0) ? (score * 100.0 / totalPossible) : 0;
        
        cout << "\n\n========================================\n";
        cout << "              QUIZ RESULTS             \n";
        cout << "========================================\n";
        cout << "Player: " << playerName << "\n";
        cout << "Score: " << score << "/" << totalPossible << " points\n";
        cout << "Percentage: " << fixed << setprecision(1) << percentage << "%\n\n";
        
        // Performance feedback
        if (percentage >= 90) {
            cout << "🏆 Excellent! You're a C++ expert!\n";
        } else if (percentage >= 70) {
            cout << "👍 Great job! You have good C++ knowledge.\n";
        } else if (percentage >= 50) {
            cout << "📘 Good effort! Keep learning C++.\n";
        } else {
            cout << "📚 Keep practicing! Review C++ fundamentals.\n";
        }
        
        cout << "========================================\n";
    }
    
    void displayMenu() {
        cout << "\n========================================\n";
        cout << "            QUIZ MAIN MENU             \n";
        cout << "========================================\n";
        cout << "1. Start New Quiz\n";
        cout << "2. View Topics\n";
        cout << "3. Quiz Instructions\n";
        cout << "4. Exit\n";
        cout << "========================================\n";
        cout << "Enter your choice (1-4): ";
    }
    
    void viewTopics() {
        cout << "\n========================================\n";
        cout << "             QUIZ TOPICS               \n";
        cout << "========================================\n";
        cout << "1. C++ Basics\n";
        cout << "   - Variables, data types\n";
        cout << "   - Operators\n";
        cout << "   - Control structures\n\n";
        
        cout << "2. Object-Oriented Programming\n";
        cout << "   - Classes and objects\n";
        cout << "   - Inheritance\n";
        cout << "   - Polymorphism\n\n";
        
        cout << "3. Memory Management\n";
        cout << "   - Pointers\n";
        cout << "   - Dynamic memory\n";
        cout << "   - Smart pointers\n\n";
        
        cout << "4. Standard Template Library (STL)\n";
        cout << "   - Containers\n";
        cout << "   - Iterators\n";
        cout << "   - Algorithms\n\n";
        
        cout << "5. Advanced Concepts\n";
        cout << "   - Templates\n";
        cout << "   - Exception handling\n";
        cout << "   - Multithreading\n";
        cout << "========================================\n";
    }
    
    void viewInstructions() {
        cout << "\n========================================\n";
        cout << "           QUIZ INSTRUCTIONS           \n";
        cout << "========================================\n";
        cout << "1. The quiz consists of 10 random questions\n";
        cout << "2. Each question has 4 possible answers\n";
        cout << "3. Points are awarded based on difficulty:\n";
        cout << "   - Easy: 5 points\n";
        cout << "   - Medium: 10 points\n";
        cout << "   - Hard: 15 points\n";
        cout << "4. Type A, B, C, or D to answer\n";
        cout << "5. Answer feedback and explanations provided\n";
        cout << "6. Your final score is displayed at the end\n";
        cout << "========================================\n";
    }
    
public:
    Quiz() : score(0), totalPossible(0) {
        initializeQuestions();
    }
    
    void run() {
        int choice;
        
        do {
            displayMenu();
            cin >> choice;
            cin.ignore(); // Clear newline
            
            switch (choice) {
                case 1:
                    startQuiz();
                    break;
                case 2:
                    viewTopics();
                    break;
                case 3:
                    viewInstructions();
                    break;
                case 4:
                    cout << "\nThank you for playing! Goodbye!\n";
                    break;
                default:
                    cout << "\nInvalid choice! Please enter 1-4.\n";
            }
            
        } while (choice != 4);
    }
    
    void startQuiz() {
        score = 0;
        displayWelcome();
        
        cout << "\nGet ready! The quiz starts now...\n";
        cout << "Press Enter to continue...";
        cin.ignore();
        
        int numQuestions = min(5, (int)questions.size()); // Limit to 5 questions
        
        for (int i = 0; i < numQuestions; i++) {
            const Question& q = questions[i % questions.size()];
            
            askQuestion(i + 1, q);
            
            char answer;
            cin >> answer;
            cin.ignore(); // Clear newline
            
            // Validate input
            while (!validateAnswer(answer)) {
                cout << "Invalid input! Please enter A, B, C, or D: ";
                cin >> answer;
                cin.ignore();
            }
            
            // Convert to uppercase
            answer = toupper(answer);
            
            bool correct = (answer == q.correctAnswer);
            displayResult(correct, q);
            
            if (i < numQuestions - 1) {
                cout << "\nPress Enter for next question...";
                cin.ignore();
            }
        }
        
        displayScore();
        
        // Ask if user wants to play again
        cout << "\nWould you like to play again? (Y/N): ";
        char playAgain;
        cin >> playAgain;
        cin.ignore();
        
        if (toupper(playAgain) == 'Y') {
            // Shuffle questions again for new game
            random_shuffle(questions.begin(), questions.end());
            startQuiz();
        }
    }
};

int main() {
    Quiz quiz;
    quiz.run();
    return 0;
}
