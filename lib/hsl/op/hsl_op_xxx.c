#include <linux/proc_fs.h>
#include <linux/ip.h>
#include <net/ip.h>
#include <net/ip_fib.h>
#include <linux/tcp.h>
#include <linux/udp.h>
#include <linux/icmp.h>
#include <linux/in.h>
#include <net/ip_fib.h>
#include <asm/io.h>
#include <asm/uaccess.h>
#include <linux/inetdevice.h>
#include <linux/etherdevice.h>
#include <linux/igmp.h>
#include <linux/mroute.h>
#include <net/icmp.h>
#include <net/protocol.h>
#include <net/addrconf.h>
#include <linux/ctype.h>

#include "hsl_tlv.h"
#include "netl_netlink.h"
#include "netlk_comm.h"
#include "hsl_msg_nl_type.h"
#include "hsl_msg_mgr.h"
#include "hsl_msg_header.h"

int hsl_xxx_add(struct socket *sock,
                      struct netl_nlmsghdr *nlhdr,
                      unsigned char *msg,
                      unsigned int msglen)
{
    return 0;
}
int hsl_xxx_del(struct socket *sock,
                      struct netl_nlmsghdr *nlhdr,
                      unsigned char *msg,
                      unsigned int msglen)
{
    return 0;
}
int hsl_xxx_update(struct socket *sock,
                      struct netl_nlmsghdr *nlhdr,
                      unsigned char *msg,
                      unsigned int msglen)
{
    return 0;
}
