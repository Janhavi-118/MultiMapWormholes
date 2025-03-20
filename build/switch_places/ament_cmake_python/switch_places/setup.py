from setuptools import find_packages
from setuptools import setup

setup(
    name='switch_places',
    version='0.0.0',
    packages=find_packages(
        include=('switch_places', 'switch_places.*')),
)
