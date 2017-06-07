#include <stdio.h>
#include <opencv2/opencv.hpp>

/*
	A collection of different GST camera piplines
	we tried.
*/

using namespace cv;
using namespace std;

int main(int argc, char** argv) {

    VideoCapture cap(1); // open the camera


    if (!cap.isOpened()) { 
	// check if we succeeded
        cout << "Capture open failed !\n" << endl;
	return -1;
    }

    namedWindow("edges",1);
    Mat frameLast;
    for (;;) {
	Mat frameCurrent;
	cap >> frameCurrent; // get a new frame from camera
	if (frameCurrent.empty()) {
	    break;
        }
	cvtColor(frameCurrent, frameCurrent, CV_BGR2GRAY);
	if (!frameLast.empty()) {
	    frameLast -= frameCurrent;
	    imshow("edges", frameLast);
	}
	frameLast = frameCurrent;
	if (waitKey(30) >= 0) {
            break;
        }
    }
    return 0;
}

