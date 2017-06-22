cmake_minimum_required(VERSION 3.6)
project(Ex6_MailBox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Observer.h GuiNotifier.h IconBadgeMonitor.h Mail.h MailBox.h)
add_executable(Ex6_MailBox ${SOURCE_FILES})