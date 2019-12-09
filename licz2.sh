#!/bin/bash
read x
for (( i=1; $i<9; i++)); do
	x=$((x + 1))
	echo "$x"
done
for((i=5; $i>0; i--)); do
	echo "Pozostalo $i sekund"
	sleep 1
done
echo "END"