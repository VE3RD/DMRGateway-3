#!/bin/bash
#########################################################
#  This is the install script to install the            #
#  DMRGateway-3 by VE3RD				#
#							#
#  VE3RD                                    2020-06-24  #
#########################################################

sudo mount -o remount,rw /

sudo make clean
sudo make
sudo dmrgateway.service stop
if [ ! -f /usr/local/bin/DMRGateway.orig ]; then
 	sudo cp /usr/local/bin/DMRGateway  /usr/local/bin/DMRGateway.orig 
fi
sudo cp ./DMRGateway /usr/local/bin/
sudo reboot


