## Copy of original
https://github.com/NetDirect/nfsshell



## nfsshell
NFS shell that provides user level access to an NFS server, over UDP or TCP,
supports source routing and "secure" (privileged port) mounts. It's a
useful tool to manually check (or show) security problems after a security
scanner has detected them.

Originally released by Leendert van Doorn, updated to support NFSv3 by Michael Brown
### Installation

Clone to ```/opt```.

```sh
cd /opt
git clone https://github.com/xsankorre/nfsshell.git
sudo chown -R $USER: nfsshell
cd nfsshell 
./run.sh
```
