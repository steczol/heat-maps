#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main() {
  std::cout << "generate" << std::endl;

  auto img = cv::imread("../data/mask.png");

  cv::imshow("Debug", img);
  cv::waitKey();

  return 0;
}