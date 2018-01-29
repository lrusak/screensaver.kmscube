cmake_minimum_required(VERSION 3.4)
project(screensaver.kmscube LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR})

find_package(Kodi REQUIRED)
find_package(OpenGLES2 REQUIRED)
set(DEPLIBS ${OPENGLES2_LIBRARIES})

include_directories(${KODI_INCLUDE_DIR}/.. /usr/include/drm) # Hack way with "/..", need bigger Kodi cmake rework to match right include ways

set(KMSCUBE_SOURCES cube-smooth.c
                    common.c
                    esTransform.c
                    kmscube.cpp)

set(KMSCUBE_HEADERS common.h
                    esUtil.h
                    kmscube.h)

build_addon(screensaver.kmscube KMSCUBE DEPLIBS)