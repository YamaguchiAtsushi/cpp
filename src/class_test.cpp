#include <stdio.h>

class TestClass{
private:
    int val1_, val2_;
    int addVal_;

public:
    TestClass(){
        printf("hoge\n");
    }

    TestClass(int val1, int val2):
        val1_(val1),    //val1_ = val1
        val2_(val2)     //val2_ = val2
    {
        printf("fuga\n");
    }

    void printVals(void){
        printf("val1 = %d, val2 = %d\n", val1_, val2_);
    }

    void addVals(void){
        addVal_ = val1_ + val2_;
    }

    void printAddval(void){
            printf("addVal = %d\n", addVal_);
        }
};

int main(int argc, char **argv){
    //TestClass test(10, 5);
    //test.printVals();
    //test.addVals();
    //test.printAddval();
    TestClass test;
    return 0; 
} 