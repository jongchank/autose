#!/bin/sh
cp -f inputrc ~/.inputrc
cp -f vimrc ~/.vimrc
sudo apt update
sudo apt -y upgrade
sudo apt -y install build-essential
sudo apt -y install gdb
sudo apt -y install valgrind 
sudo apt -y install cmake
sudo apt -y install xutils-dev
sudo sysctl -w kernel.core_pattern=core
wget -P ~ https://github.com/cyrus-and/gdb-dashboard/raw/master/.gdbinit
