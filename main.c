#include <stdio.h>
#include <ctype.h>


int main() {

    char answer;
    int score = 0;

    char questions[][100] = {
        "What year was Microsoft founded?",
        "Who is the current Head of Xbox?", 
        "Who is the President of Microsoft?",
        "What year was Xbox released?",
        "Where is the Headquarters of Microsoft located?"
        };

    const char options[][100][20] = {
        {"A. 1975", "B. 1981", "C. 1978", "D. 1976"},
        {"A. Don Matrick", "B. Steve Ballmer", "C. Phil Spencer", "D. Aaron Greenberg"},
        {"A. Matt Booty", "B. Panos Panay", "C. Satya Nadella", "D. Brad Smith"},
        {"A. 2001", "B. 2002", "C. 1999", "D. 2000"},
        {"A. Washington", "B. California", "C. Texas", "D. Chicago"},
    };

    char answers[5] = {'A', 'C', 'D', 'A', 'A'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    printf("************************QUIZ GAME***********************\n");

    for(int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++) {
        printf("-----------------------------------------------------\n");
        printf("\nQuestion %d: %s\n\n", i + 1, questions[i]);

        for(int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        puts("Enter answer: ");
        scanf("%c", &answer);
        scanf("%c");

        printf("-----------------------------------------------------\n");


        // guess = toupper(guess);
        printf("%c", answer);
        
        // if(guess == answers[i]) {
        //     printf("CORRECT\n");
        //     score++;
        // } else {
        // printf("WRONG ANSWER\n");
        // }
   
    }

    return 0;
}