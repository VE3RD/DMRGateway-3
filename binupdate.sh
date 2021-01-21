#!/bin/bash
#########################################################
#  This is the install script to update  the            #
#  DMRGateway in /usr/local/bin  by VE3RD		#
#							#
#  VE3RD                                    2020-06-24  #
#########################################################

sudo mount -o remount,rw /

sudo dmrgateway.service stop
sudo cp ./DMRGateway /usr/local/bin/
sudo dmrgateway.service start
sleep 2
sudo mmdvmhost.service restart


