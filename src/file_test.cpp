#include <stdio.h>
#include<string>

void sampleWriteData(std::string fname){
    FILE *fp = fopen(fname.c_str(), "w");

    for (int i = 0; i< 10; i++){
        int data1 = i * 2;
        int data2 = i * 2 + 1;
        float data3 = (float)i / 10.0f;
        double data4 = (float)i * 1.5;
        fprintf(fp, "%d %d %f %lf\n",data1 ,data2 ,data3 ,data4);
    }

    fclose(fp);
}

void sampleReadData(std::string fname){
    FILE *fp = fopen(fname.c_str(), "r");
    int data1, data2;
    float data3;
    double data4;

    while(fscanf(fp, "%d %d %f %lf", &data1, &data2, &data3, &data4) != EOF){
        printf("%d %d %f %lf\n",data1 ,data2 ,data3 ,data4);
    }
    
    fclose(fp);
}   

int main(int argc, char **argv){
    sampleWriteData("sample_file.txt");
    sampleReadData("sample_file.txt");
    return 0;
}