cmake_minimum_required(VERSION 3.10)
project(train)

set(CMAKE_CXX_STANDARD 20)

add_executable(train
        TypeWagon.h
        TypeWagon.cpp
        TypeLocomotive.cpp
        TypeLocomotive.h
        AbstractWagon.cpp
        AbstractWagon.h
        FreightWagon.cpp
        FreightWagon.h
        main.cpp
        UtilityWagon.cpp
        UtilityWagon.h
        PassengerWagon.cpp
        PassengerWagon.h
        AbstractLocomotive.cpp
        AbstractLocomotive.h
        TrainElement.h
        ElectricLocomotive.cpp
        ElectricLocomotive.h
        GasolineLocomotive.cpp
        GasolineLocomotive.h
        Wagons.cpp
        Wagons.h
        ITrain.h
        Train.cpp
        Train.h
)
