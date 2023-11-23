// 基础库
#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

// Eigen库
#include <Eigen/Eigen>
#include <Eigen/Core>
#include <Eigen/Geometry>

// TF库
#include <tf/transform_listener.h>
#include <tf/transform_datatypes.h>
#include <tf_conversions/tf_eigen.h>

// Ceres库
#include <ceres/ceres.h>

int main(int argc, char** argv){
    ros::init(argc, argv, "ceres_test");
    ros::NodeHandle nh;

    // 输入需估计的转换矩阵
    std::vector<Eigen::Matrix4d> trans_vec;
    Eigen::Matrix4d temp;
    temp << 0.685307,-0.527632,-0.501955,-0.245184,
            0.728254,0.496516,0.472354,0.38252,
            0,-0.689258,0.724516,-0.700303,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.726441,-0.403018,-0.556651,-0.2477,
            0.687229,0.426013,0.588413,0.390422,
            0,-0.809993,0.586439,-0.715492,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.588456,-0.347605,-0.729994,-0.2607,
            0.80853,0.25299,0.531297,0.384178,
            0,-0.902866,0.429922,-0.732709,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.686265,-0.0536852,-0.725368,-0.258794,
            0.727352,0.0506526,0.684393,0.395473,
            0,-0.997272,0.0738091,-0.771881,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.872028,-0.371293,-0.318918,-0.229243,
            0.489456,0.661506,0.568192,0.3921,
            0,-0.651576,0.758583,-0.696556,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.743142,-0.513046,-0.429563,-0.239586,
            0.669134,0.56979,0.477073,0.383964,
            0,-0.641968,0.766732,-0.69566,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.899963,-0.253284,-0.354844,-0.230365,
            0.435967,0.522852,0.732502,0.402682,
            0,-0.813924,0.580971,-0.716093,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.922718,-0.200693,-0.329111,-0.227785,
            0.385475,0.480401,0.787797,0.40651,
            0,-0.853778,0.520637,-0.72273,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.866963,-0.162548,-0.47112,-0.238706,
            0.498373,0.282767,0.819553,0.407332,
            0,-0.945315,0.326158,-0.744123,
            0,0,0,1;
    trans_vec.push_back(temp);

    temp << 0.792026,-0.193062,-0.579156,-0.247538,
            0.610488,0.250472,0.751378,0.401675,
            0,-0.948678,0.316243,-0.745213,
            0,0,0,1;
    trans_vec.push_back(temp);

    

}