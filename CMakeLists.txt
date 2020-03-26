cmake_minimum_required(VERSION 3.15)
project(Exam_project)

set(CMAKE_CXX_STANDARD 14)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_executable(Exam_project main.cpp Category.cpp Category.h ActivityBluePrint.cpp ActivityBluePrint.h Colors.h Colors.cpp Activity.h ui_mainwindow.h MainWindow.cpp MainWindow.h)

# Use the Widgets module from Qt 5.
target_link_libraries(Exam_project Qt5::Widgets)