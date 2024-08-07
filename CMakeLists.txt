cmake_minimum_required(VERSION 3.5)

project(Opencv_Server VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Network Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Network Sql)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Include directories for SeetaFace2
# Include directories for SeetaFace2
include_directories(
    /Users/areay7/Opencv/SeetaFace2/FaceDetector/include
    /Users/areay7/Opencv/SeetaFace2/FaceLandmarker/include
    /Users/areay7/Opencv/SeetaFace2/FaceRecognizer/include
    /Users/areay7/Opencv/SeetaFace2/FaceTracker/include
    /Users/areay7/Opencv/SeetaFace2/FaceDatabase/include
    /Users/areay7/Opencv/SeetaFace2/QualityAssessor/include
    /Users/areay7/Opencv/SeetaFace2/SeetaNet/include
)

# Link directories for SeetaFace2
link_directories(/Users/areay7/Opencv/SeetaFace2/build/bin)

# List of SeetaFace2 libraries
set(DyLIB
    SeetaFaceDetector
    SeetaFaceLandmarker
    SeetaFaceRecognizer
    SeetaFaceTracker
    SeetaNet
    SeetaQualityAssessor)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    qfaceobject.h
    qfaceobject.cpp
)

# 设置 Info.plist 文件路径
set(MACOSX_BUNDLE_INFO_PLIST ${CMAKE_SOURCE_DIR}/Info.plist.in)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Opencv_Server
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        registerwin.h registerwin.cpp registerwin.ui
    )
else()
    if(ANDROID)
        add_library(Opencv_Server SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Opencv_Server
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Opencv_Server PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Sql ${OpenCV_LIBS} ${DyLIB})

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Opencv_Server)
endif()
set_target_properties(Opencv_Server PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE_INFO_PLIST ${MACOSX_BUNDLE_INFO_PLIST}
)

include(GNUInstallDirs)
install(TARGETS Opencv_Server
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Opencv_Server)
endif()
