import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ranas/turtlebot4_ws/src/install/turtlebot4_openai_tutorials'
