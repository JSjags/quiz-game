#include <stdio.h>
#include <ctype.h>


int main() {
    
    // QUESTIONS
    char questions[][100] = {
        "What year was Microsoft founded?",
        "Who is the current Head of Xbox?", 
        "Who is the President of Microsoft?",
        "What year was Xbox released?",
        "Where is the Headquarters of Microsoft located?",
        "How many Champions league titles has Liverpool won"
        };
    
    // OPTIONS     
    const char options[][100][20] = {
        {"A. 1975", "B. 1981", "C. 1978", "D. 1976"},
        {"A. Don Matrick", "B. Steve Ballmer", "C. Phil Spencer", "D. Aaron Greenberg"},
        {"A. Matt Booty", "B. Panos Panay", "C. Satya Nadella", "D. Brad Smith"},
        {"A. 2001", "B. 2002", "C. 1999", "D. 2000"},
        {"A. Washington", "B. California", "C. Texas", "D. Chicago"},
        {"A. 4", "B. 5", "C. 6", "D. 7"}
    };
    
    // ANSWERS
    char answers[] = {'A', 'C', 'D', 'A', 'A', 'C'};

    char answer;
    int score = 0;
    int numberofquestions = sizeof(questions)/ sizeof(questions[0]);

    printf("************************QUIZ GAME***********************\n");

    //LOOP THROUGH QUESTIONS AND PRINT QUESTION AND MATCHING OPTIONS
    for(int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++) {
        printf("-----------------------------------------------------\n");
        printf("\nQuestion %d: %s\n\n", i + 1, questions[i]);

        for(int j = 0; j < 4; j++) {
            printf("%s\n", options[i][j]);
        }
        printf("\nEnter answer: ");

        // ACCEPT USER INPUT, READ THE NEXT CHAR WHICH IS \n BUT DON'T ASSIGN IT TO POINTER 
        scanf("%c%*c", &answer);

        printf("-----------------------------------------------------\n");

        // SET USER INPUT TO UPPERCASE
        answer = toupper(answer);
        
        // CHECK IF USER INPUT IS CORRECT OR WRONG
        if(answer == answers[i]) {
            printf("CORRECT\n");
            score++;
        } else {
        printf("WRONG ANSWER\n");
        }
   
    }
    
    // FINALLY PRINT OUT USER'S SCORE
    puts("\n*******************************************");
    printf("You scored %d/%d", score, numberofquestions);
    puts("\n*******************************************");
    return 0;
}
