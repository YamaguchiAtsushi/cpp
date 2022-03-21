#include <stdio.h>

class Book{
private:
    int page;

public:
    int getPage();
    void setPage(int p);
};

int Book::getPage(){
    return page;
}

void Book::setPage(int p){
    if((p >= 1) && (p <= 1000)){
        page = p;
    }
    else{
        printf("please set 1~1000!\n");
    }
}

int main(int argc, char** argv){
    Book bk;

    bk.setPage(123);

    printf("%d\n",bk.getPage());

    bk.setPage(1000);

    printf("%d", bk.getPage());
}