from setuptools import find_packages
from setuptools import setup

setup(
    name='switch_places_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('switch_places_msgs', 'switch_places_msgs.*')),
)
