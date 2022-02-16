#include <stdio.h>
#include <vector>
#include<string>

class Point{
public:
    float x_, y_, z_;

    Point(void){}

    Point(float x, float y, float z):
        x_(x),
        y_(y),
        z_(z){}
};

void printVector(std::vector<float> vals){
    for (int i = 0; i < (int)vals.size(); i++)
        printf("%f\n", vals[i]); 
}

std::vector<float> readFile(std::string fname){
    FILE *fp = fopen(fname.c_str(), "r");
    float val;
    std::vector<float> vals;
    while(fscanf(fp, "%f", &val) != EOF)
        vals.push_back(val);
    fclose(fp);
    return vals;
}

void printVector(std::vector<Point> points){
    for (int i = 0; i < (int)points.size(); i++)
        printf("%f %f %f\n", points[i].x_, points[i].y_, points[i].z_); 
}

std::vector<Point> readPoints(std::string fname){
    FILE *fp = fopen(fname.c_str(), "r");
    float x, y, z;
    std::vector<Point> points;
    while(fscanf(fp, "%f %f %f", &x, &y, &z) != EOF){
        Point point;
        point.x_ = x;
        point.y_ = y;
        point.z_ = z;
        points.push_back(point);
       // points.push_back(Point(x, y, z));

    }
    fclose(fp);
    return points;
}

int main(int argc, char **argv){
/*
    std::vector<float> vals(5);
    vals[0] = 0.1f;
    vals[1] = 1.2f;
    vals[2] = 2.3f;
    vals[3] = 3.4f;
    vals[4] = 4.5f;
*/

/*
    std::vector<float> vals;
    vals.push_back(1.1f);
    vals.push_back(1.2f);
    vals.push_back(1.3f);
    printf("%d\n", (int)vals.size());
    printVector(vals);
*/

    //std::vector<float> vals = readFile("sample.txt");

/*
    std::vector<Point> points;
    points.push_back(Point(0.0f, 0.0f, 0.0f));
    points.push_back(Point(1.0f, 1.0f, 1.0f));
    points.push_back(Point(2.0f, 2.0f, 2.0f));
    printf("%d\n", (int)points.size());
    printVector(points);
*/

    std::vector<std::vector<int> > image;
    int width = 320;
    int height = 240;
    image.resize(width);
    for(int u = 0; u < width; u++)
        image[u].resize(height);
    for(int u = 0; u < width; u++){
        for(int v = 0; v < height; v++){
            printf("u = %d, v = %d, val = %d\n",u ,v, image[u][v]);
        }

    }
    
    return 0;
}