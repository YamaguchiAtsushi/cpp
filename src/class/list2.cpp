#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GU 0
#define CHOKI 1
#define PA 2

#define WIN 0
#define LOSE 1
#define DRAW 2

class Hand{
private:
int hand;

public:
int getUserHand();
int getComputerHand();
};

class Judge{
private:
int judge;
int user;
int computer;

public:
int doJudge(int user, int computer);
void showJudge(int judge);
};

int Hand:: getComputerHand(){
    printf("0:グー、1:チョキ、2:パー\n");
    printf("ユーザーの手＝");
    scanf("%d", &hand);
    return hand;
}

int Hand::getComputerHand(){
    hand = rand() % 3;
    printf("コンピュータの手＝%d\n", hand);
    return hand;
}

int Judge::doJudge(int user, int computer){
    if (user == computer) {
    judge = DRAW;
}
else if (user == GU && computer == CHOKI ||
        user == CHOKI && computer == PA ||
        user == PA && computer == GU) {
    judge = WIN;
}
else {
    judge = LOSE;
}

return judge;
}

void Judge::showJudge(int judge){
if (judge == WIN) {
    printf("ユーザーの勝ちです！\n");
}
else if (judge == LOSE) {
    printf("ユーザーの負けです！\n");
}
else if (judge == DRAW) {
    printf("引き分けです！\n");
}
}

int main(int argc, char** argv){

Hand hand;
Judge judge;

srand(time(NULL));

hand.getComputerHand();

hand.getComputerHand();

judge.doJudge(user, computer);

judge.showJudge(judge);

return 0;
}