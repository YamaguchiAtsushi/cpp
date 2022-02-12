#include<stdio.h>
#include<SampleClass.h>

SampleClass::SampleClass(void){
    printf("hoge\n");
}
SampleClass::SampleClass(int val1, int val2):
    val1_(val1),
    val2_(val2)
{
    printf("fuga\n");
}

SampleClass::~SampleClass(void){
    printf("hoge hoge\n");
}

void SampleClass::addVals(void){
    addVal_ = val1_ + val2_;
    printf("addVal_ = %d\n", addVal_);
    }