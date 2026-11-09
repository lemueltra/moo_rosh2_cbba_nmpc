from setuptools import find_packages
from setuptools import setup

setup(
    name='swarm_world_interfaces',
    version='3.1.0',
    packages=find_packages(
        include=('swarm_world_interfaces', 'swarm_world_interfaces.*')),
)
