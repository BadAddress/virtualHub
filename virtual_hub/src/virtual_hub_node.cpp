#include "rclcpp/rclcpp.hpp"

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
    rclcpp::init(argc, argv);
    auto node = std::make_shared<VirtualHub>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
