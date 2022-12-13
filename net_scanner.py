import scapy.all as scapy
import  optparse
#1)arp_request
#2)broadcast
#3)response

def getting_user_imput():
    pars_object=optparse.OptionParser()
    pars_object.add_option("-i","--ip",dest="ip",help="Enter IP Address")
    (user_input,arguments)=pars_object.parse_args()
    if not user_input.ip:
        print("Try Again")
    return user_input



def scan_network(ip):
    arp_request_pack = scapy.ARP(pdst="10.0.2.15/24")
    broadcast_pack = scapy.Ether(dst="ff:ff:ff:ff:ff:ff")
    combined_packet = broadcast_pack / arp_request_pack
    (answered_list, unanswered_list) = scapy.srp(combined_packet, timeout=1)
    answered_list.summary()



print("QRt's Net Scanner Has been Started!!!!!")
user_ip=getting_user_imput()
scan_network(user_ip.ip)