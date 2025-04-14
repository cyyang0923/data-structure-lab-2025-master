#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img = imread("Lenna.png", IMREAD_GRAYSCALE);
    
    if (img.empty()) {
        cout << "이미지를 불러올 수 없습니다!" << endl;
        return -1;
    }
    double minVal, maxVal;
    minMaxLoc(img, &minVal, &maxVal);

    cout << "최대 밝기 값: " << maxVal << endl;

    return 0;
}