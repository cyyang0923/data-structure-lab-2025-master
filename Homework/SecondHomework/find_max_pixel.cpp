#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img = imread("Lenna.png", IMREAD_GRAYSCALE);
    
    if (img.empty()) {
        cout << "�̹����� �ҷ��� �� �����ϴ�!" << endl;
        return -1;
    }
    double minVal, maxVal;
    minMaxLoc(img, &minVal, &maxVal);

    cout << "�ִ� ��� ��: " << maxVal << endl;

    return 0;
}