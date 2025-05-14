from setuptools import setup

package_name = 'choirbot_io'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'opencv-python',
        'PyQt5',
        'bleak',
    ],
    zip_safe=True,
    maintainer='santiago',
    maintainer_email='santiago@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'aruco_detector = choirbot_io.aruco_detector:main',
            'goal_gui = choirbot_io.goal_gui:main',
            'ble_bridge = choirbot_io.ble_bridge:main',
        ],
    },
)
