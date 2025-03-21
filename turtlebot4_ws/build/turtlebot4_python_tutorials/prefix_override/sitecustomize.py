import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ranas/turtlebot4_navigation_urp/turtlebot4_ws/install/turtlebot4_python_tutorials'
