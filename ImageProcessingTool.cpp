#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    // Load Image
    Mat image = imread("image.jpg");

    // Display Image
    namedWindow("Original Image", WINDOW_NORMAL);
    imshow("Original Image", image);

    // Image Filters
    Mat grayImage, blurImage, sharpenImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);
    GaussianBlur(image, blurImage, Size(5, 5), 0);
    Mat kernel = (Mat_<float>(3, 3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
    filter2D(image, sharpenImage, -1, kernel);

    // Color Adjustment
    Mat adjustedImage;
    image.convertTo(adjustedImage, -1, 1.5, 50);

    // Crop and Resize
    Rect cropRegion(100, 100, 300, 300);
    Mat croppedImage = image(cropRegion);
    Mat resizedImage;
    resize(image, resizedImage, Size(500, 500));

    // Image Saving
    imwrite("processed_image.jpg", resizedImage);

    // User Interface
    // Design a user-friendly interface using a GUI library of your choice

    waitKey(0);
    return 0;
}
