#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace cv;

int main(int argc, char **argv) {
	char *imageName = argv[1];
	Mat image;

	image = imread(imageName, 1);
	if (argc != 2 || image.data == NULL) {
		puts("No image data");
		return (-1);
	}
	Mat gray_image;
	cvtColor(image, gray_image, COLOR_BGR2GRAY);
	imwrite("./Gray_Image.jpg", gray_image);
	namedWindow(imageName, WINDOW_AUTOSIZE);
	namedWindow("Gray image", WINDOW_AUTOSIZE);
	imshow(imageName, image);
	imshow("Gray image", gray_image);
	waitKey(0);

	return (0);
}
