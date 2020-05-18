cmake_minimum_required(VERSION 3.15)
project(Exam_project)

set(CMAKE_CXX_STANDARD 14)

#the compiler is gonna look here too
add_subdirectory(test)

# Required if: 1) using macOS and 2) using Brew
set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.14.1/lib/cmake/")
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)

#here goes all the source files except main.cpp
set(SOURCE_FILES Category.cpp ActivityBluePrint.cpp Colors.cpp MainWindow.cpp CategoryAdderView.cpp)
set(HEADER_FILES Category.h ActivityBluePrint.h Colors.h Activity.h Ui_MainWindow.h MainWindow.h Ui_CategoryAdderView.h CategoryAdderView.h Subject.h Observer.h)


#creates a library out of the remaining files
add_library(core ${SOURCE_FILES} ${HEADER_FILES})
add_executable(Exam_project main.cpp)
target_link_libraries(Exam_project core)


target_link_libraries(core Qt5::Widgets)
target_link_libraries(Exam_project Qt5::Widgets)

