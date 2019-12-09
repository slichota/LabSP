#!/bin/bash
mkdir ~/Pliki
read x
cd ~
find -name "*$x*" -exec cp {} ~/Pliki \;