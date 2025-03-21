import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
from builtin_interfaces.msg import Time

class PathPlanner(Node):
    def __init__(self):
        super().__init__('path_planner')

        # Publisher to send velocity commands
        self.publisher_ = self.create_publisher(TwistStamped, '/cmd_vel', 10)

        # Timer to send commands at a fixed rate
        self.timer = self.create_timer(0.5, self.move_robot)

    def move_robot(self):
        msg = TwistStamped()

        # Set header timestamp
        msg.header.stamp.sec = self.get_clock().now().seconds_nanoseconds()[0]
        msg.header.stamp.nanosec = self.get_clock().now().seconds_nanoseconds()[1]
        msg.header.frame_id = "base_link"  # Reference frame

        # Set linear velocity (move forward)
        msg.twist.linear.x = 0.2
        msg.twist.linear.y = 0.0
        msg.twist.linear.z = 0.0

        # Set angular velocity (no rotation)
        msg.twist.angular.x = 0.0
        msg.twist.angular.y = 0.0
        msg.twist.angular.z = 0.0

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing velocity command!')

def main(args=None):
    rclpy.init(args=args)
    node = PathPlanner()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
