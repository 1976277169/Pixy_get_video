#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {
	Mat image, gray_image;
	image = imread("cat.jpg", CV_LOAD_IMAGE_COLOR); //讀取命令引數的檔案
	if (image.empty()) {
		cout << "Can not load image." << endl;
		return -1;
	}
	cvtColor(image, gray_image, CV_BGR2GRAY); //將image從RGB轉成GRAY並存到gray_image
	namedWindow("Window", WINDOW_AUTOSIZE);   //建立名為"Window"的視窗
	imshow("Window", image);  //在Window秀出原圖
	imshow("Gray Window", gray_image);    //在gray_Window秀出灰階圖
	waitKey(0);
	destroyWindow("Window");
	destroyWindow("Gray Window");
	return 0;
}
