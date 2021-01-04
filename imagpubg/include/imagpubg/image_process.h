#ifndef IMAGE_PROCESS_H
#define IMAGE_PROCESS_H

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "opencv2/opencv.hpp"
#include <iostream>
#include "sensor_msgs/Image.h" 
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/image_encodings.h>

using namespace std;

class Controller
{
    public:
        explicit Controller(ros::NodeHandle nh);
        void callback(const std_msgs::String::ConstPtr& msgptr);
        std::string gstreamer_pipeline (int capture_width, int capture_height, int display_width, int display_height, int framerate, int flip_method);
    

        int capture_width = 1280 ;
        int capture_height = 720 ;
        int display_width = 1280 ;
        int display_height = 720 ;
        int framerate = 60 ;
        int flip_method = 0 ;
    private:
        ros::NodeHandle m_nh;
        ros::Publisher img_pub;
        ros::Subscriber m_img;

};

#endif