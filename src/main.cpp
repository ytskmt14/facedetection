#include "main.h"
#include "facedetection.h"

int main(int argc, char* argv[])
{
	VideoCapture cap(0);
	Mat image;
	string filename = argv[1];
	while(1){
		cap >> image;
		Mat detectFaceImage = detectFaceInImage(image, filename);
		imshow("detect face", detectFaceImage);
		if(waitKey(1) == 27){
			break;
		}
	}
	return 0;
}
