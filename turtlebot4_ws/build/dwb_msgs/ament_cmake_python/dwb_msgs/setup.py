from setuptools import find_packages
from setuptools import setup

setup(
    name='dwb_msgs',
    version='1.3.5',
    packages=find_packages(
        include=('dwb_msgs', 'dwb_msgs.*')),
)
