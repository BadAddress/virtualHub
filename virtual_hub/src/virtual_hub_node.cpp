#include "rclcpp/rclcpp.hpp"
#include <tinyb.hpp>
#include <iostream>
using namespace std;




class VirtualHub : public rclcpp::Node
{
public:
    VirtualHub() : Node("virtual_hub")
    {
        RCLCPP_INFO(this->get_logger(), "Virtual Hub node has started.");
    }
};

int main(int argc, char *argv[])
{


    cout<<"hello world~"<<endl;

    rclcpp::init(argc, argv);
    auto node = std::make_shared<VirtualHub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
