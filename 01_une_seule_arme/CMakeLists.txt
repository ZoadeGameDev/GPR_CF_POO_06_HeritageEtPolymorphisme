add_executable(01_une_seule_arme
        main.cc
        src/weapon.cc
        src/firearm.cpp
        include/firearm.h
        src/semiautomatic.cpp
        include/semiautomatic.h
        src/fullauto.cpp
        include/FullAuto.h
        src/melee.cpp
        include/melee.h)
target_include_directories(01_une_seule_arme PRIVATE include)
