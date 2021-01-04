#include "../include/imagpubg/image_process.h"
#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <image_transport/image_transport.h>
int main(int argc ,char** argv){
    ros::init(argc , argv ,"image_publisher");
    ros::NodeHandle nh;
    Controller controller(nh);
    
    ros::spin();
    return 0;


}