#ifndef __SAMPLE_CLASS_H__
#define __SAMPLE_CLASS_H__


class SampleClass{
private:
    int val1_, val2_;
    int addVal_;
public:
    SampleClass();
    SampleClass(int val1, int val2);

    ~SampleClass();

    void addVals(void);
};

#endif //__SAMPLE__CLASS_H__