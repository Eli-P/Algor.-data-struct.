cmake_minimum_required(VERSION 3.14)
project(card_games)

set(CMAKE_CXX_STANDARD 17)

add_executable(card_games main.cpp Card.h Card.cpp Deck.cpp Deck.h Hand.h Hand.cpp War.h War.cpp)