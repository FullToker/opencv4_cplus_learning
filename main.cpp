#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <random>

cv::Mat function(){
    cv::Mat ima(500,500,CV_8U,50);
    return ima;
}
void salt(cv::Mat image, int n){
    std::default_random_engine generator;
    std::uniform_int_distribution<int> randomRow(0,image.rows-1);
    std::uniform_int_distribution<int> randomCol(0,image.cols-1);

    int i,j;
    for(int k=0;k<n;k++){
        i=randomRow(generator);
        j=randomCol(generator);
        if(image.type()==CV_8UC1){
            image.at<uchar>(i,j)=255;
        }
        else if(image.type()==CV_8UC3) {
            image.at<cv::Vec3b>(i,j)[0]=255;
            image.at<cv::Vec3b>(i,j)[1]=255;
            image.at<cv::Vec3b>(i,j)[2]=255;
        }
    }
}

void pepper(cv::Mat image, int n){
    std::default_random_engine generator;
    std::uniform_int_distribution<int> randomRow(0,image.rows-1);
    std::uniform_int_distribution<int> randomCol(0,image.cols-1);

    int i,j;
    for(int k=0;k<n;k++){
        i=randomRow(generator);
        j=randomCol(generator);
        if(image.type()==CV_8UC1){
            image.at<uchar>(i,j)=0;
        }
        else if(image.type()==CV_8UC3) {
            image.at<cv::Vec3b>(i,j)[0]=0;
            image.at<cv::Vec3b>(i,j)[1]=0;
            image.at<cv::Vec3b>(i,j)[2]=0;
        }
    }
}
void colorReduce(cv::Mat image, int div=64){
    
}

int main() {
    std::cout << "Hello, OpenCV!" << std::endl;
    /*
    cv::Mat image;
    image=cv::imread("./data/puppy.bmp",cv::IMREAD_GRAYSCALE);
    image=cv::imread("./data/puppy.bmp",cv::IMREAD_COLOR);
    std::cout<<"this image has "<<image.channels()<<" Channels"<<std::endl;
    if(image.empty()){

    }
    cv::namedWindow("Original Image");
    cv::imshow("Original Image",image);


    cv::Mat result;
    cv::flip(image,result,1);
    cv::namedWindow("Output Image");
    cv::imshow("Output Image",image);
     */

    /*
    cv::Mat image1(240,320,CV_8U,100);
    cv::imshow("Image",image1);
    cv::waitKey(0);

    image1.create(200,200,CV_8U);
    image1=200;
    cv::imshow("Image",image1);
    cv::waitKey(0);

    cv::Mat image2(240,320,CV_8UC3,cv::Scalar(0,0,255));
    cv::imshow("Image",image2);
    cv::waitKey(0);

    cv::Mat image3=cv::imread("./data/puppy.bmp");

    //这些图像指向同一个数据块
    cv::Mat image4(image3);
    image1=image3;
    //这些图像是源图像的副本
    image3.copyto(image2);
    cv::Mat image5=image3.clone();
     */

    /*
    cv::Mat gray=function();
    cv::imshow("gray image",gray);
    cv::waitKey(0);

    cv::Mat image1=cv::imread("./data/puppy.bmp",cv::IMREAD_GRAYSCALE);

    cv::Mat image2;
    image1.copyTo(image2);
    image1.convertTo(image2,CV_32F,1/255.0,0.0);

    cv::imshow("Image",image2);
    cv::waitKey(0);
     */

    /*
    cv::Mat image=cv::imread("./data/puppy.bmp",cv::IMREAD_GRAYSCALE);
    image=cv::imread("./data/puppy.bmp");
    cv::Mat logo=cv::imread("./data/smalllogo.png");
    cv::imshow("logo",logo);
    cv::waitKey(0);
    cv::Mat imageROI=image(cv::Rect(image.cols-logo.cols,image.rows-logo.rows,
                                    logo.cols,logo.rows));
    cv::Mat mask(logo);
    logo.copyTo(imageROI,mask);
    cv::imshow("Image",image);
    cv::waitKey(0);
    */
    /*
    // operation of pixels
    cv::Mat image_boldt=cv::imread("./data/boldt.jpg");
    salt(image_boldt,2000);
    cv::imshow("salted image",image_boldt);
    cv::waitKey(0);
    pepper(image_boldt,2000);
    cv::imshow("saltpepper image",image_boldt);
    cv::waitKey(0);

    cv::Mat_<cv::Vec3b> img_test(image_boldt);
    img_test(50,100)[0]=100;
    img_test(50,100)[1]=180;
    img_test(50,100)[2]=17;
    cv::imshow("mat_ image",img_test);
    cv::waitKey(0);
    */

    // reduce the color


    return 0;
}
