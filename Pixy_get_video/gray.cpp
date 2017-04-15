#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {
	Mat image, gray_image;
	image = imread("cat.jpg", CV_LOAD_IMAGE_COLOR); //Ū���R�O�޼ƪ��ɮ�
	if (image.empty()) {
		cout << "Can not load image." << endl;
		return -1;
	}
	cvtColor(image, gray_image, CV_BGR2GRAY); //�Nimage�qRGB�নGRAY�æs��gray_image
	namedWindow("Window", WINDOW_AUTOSIZE);   //�إߦW��"Window"������
	imshow("Window", image);  //�bWindow�q�X���
	imshow("Gray Window", gray_image);    //�bgray_Window�q�X�Ƕ���
	waitKey(0);
	destroyWindow("Window");
	destroyWindow("Gray Window");
	return 0;
}
