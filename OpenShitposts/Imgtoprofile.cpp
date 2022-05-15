#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

void main() {
string path;

Mat blur, re, canny;

cout << "image path:\n";

Mat img = imread(path);

imshow("Your shitpost",img);

GaussianBlur(img, blur, Size(7, 7), 5, 0);

Canny(blur, canny, 25, 25);

imshow("Your outline", canny);

}