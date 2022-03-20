#include <stdio.h>

class MyMessage{
public:
void showMessage();
void showMessage(const char* a);
void showMessage(const char* a, int n);
};

void MyMessage::showMessage(){
    printf("hello\n");
}

void MyMessage::showMessage(const char *a){
    printf("%s\n", a);
}

void MyMessage::showMessage(const char *a, int n){
    for (int i = 0; i < n; i++){
        printf("%s\n", a);
    }
}

int main (int argc, char** argv){
    MyMessage obj;
    obj.showMessage();
    obj.showMessage("good evening");
    obj.showMessage("good morning", 3);

    return 0;
}