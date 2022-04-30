#!/bin/bash
[ $# -ne 1 ] && echo Please enter a single number higher than 3 && exit
[ $1 -lt 4 ] && echo Please enter a single number higher than 3 && exit
c=0 # count
m=0 # highest count
s='' # sequence
t='' # longest sequence
for i in $(seq 4 $1); do
	if [ $(factor $i | wc -w) -gt 2 ]; then # i is not prime
		((c++))
		s+=$i' '
		if [ $m -lt $c ]; then
			m=$c
			t=$s
		fi
	else
		c=0
		s=''
	fi
done
echo $m
echo $t
