/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MOUNT_H_RPCGEN
#define _MOUNT_H_RPCGEN
#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MNTPATHLEN 1024
#define MNTNAMLEN 255
#define FHSIZE3 64

typedef struct {
	u_int fhandle3_len;
	char fhandle3_val[FHSIZE3];
} fhandle3;

typedef char *dirpath;

typedef char *name;

enum mountstat3 {
	MNT3_OK = 0,
	MNT3ERR_PERM = 1,
	MNT3ERR_NOENT = 2,
	MNT3ERR_IO = 5,
	MNT3ERR_ACCES = 13,
	MNT3ERR_NOTDIR = 20,
	MNT3ERR_INVAL = 22,
	MNT3ERR_NAMETOOLONG = 63,
	MNT3ERR_NOTSUPP = 10004,
	MNT3ERR_SERVERFAULT = 10006,
};
typedef enum mountstat3 mountstat3;

typedef struct mountbody *mountlist;

struct mountbody {
	name ml_hostname;
	dirpath ml_directory;
	mountlist ml_next;
};
typedef struct mountbody mountbody;

typedef struct groupnode *groups;

struct groupnode {
	name gr_name;
	groups gr_next;
};
typedef struct groupnode groupnode;

typedef struct exportnode *exports;

struct exportnode {
	dirpath ex_dir;
	groups ex_groups;
	exports ex_next;
};
typedef struct exportnode exportnode;

struct mountres3_ok {
	fhandle3 fhandle;
	struct {
		u_int auth_flavors_len;
		int *auth_flavors_val;
	} auth_flavors;
};
typedef struct mountres3_ok mountres3_ok;

struct mountres3 {
	mountstat3 fhs_status;
	union {
		mountres3_ok mountinfo;
	} mountres3_u;
};
typedef struct mountres3 mountres3;

enum mountstat1 {
	MNT1_OK = 0,
	MNT1ERR_PERM = 1,
	MNT1ERR_NOENT = 2,
	MNT1ERR_IO = 5,
	MNT1ERR_ACCES = 13,
	MNT1ERR_NOTDIR = 20,
	MNT1ERR_INVAL = 22,
	MNT1ERR_NAMETOOLONG = 63,
	MNT1ERR_NOTSUPP = 10004,
	MNT1ERR_SERVERFAULT = 10006,
};
typedef enum mountstat1 mountstat1;
#define FHSIZE 32

typedef char fhandle1[FHSIZE];

struct mountres1_ok {
	fhandle1 fhandle;
};
typedef struct mountres1_ok mountres1_ok;

struct mountres1 {
	mountstat1 fhs_status;
	union {
		mountres1_ok mountinfo;
	} mountres1_u;
};
typedef struct mountres1 mountres1;

#define MOUNT_PROGRAM 100005
#define MOUNT_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define MOUNT1_NULL 0
extern  void * mount1_null_1(void *, CLIENT *);
extern  void * mount1_null_1_svc(void *, struct svc_req *);
#define MOUNT1_MNT 1
extern  mountres1 * mount1_mnt_1(dirpath *, CLIENT *);
extern  mountres1 * mount1_mnt_1_svc(dirpath *, struct svc_req *);
#define MOUNT1_DUMP 2
extern  mountlist * mount1_dump_1(void *, CLIENT *);
extern  mountlist * mount1_dump_1_svc(void *, struct svc_req *);
#define MOUNT1_UMNT 3
extern  void * mount1_umnt_1(dirpath *, CLIENT *);
extern  void * mount1_umnt_1_svc(dirpath *, struct svc_req *);
#define MOUNT1_UMNTALL 4
extern  void * mount1_umntall_1(void *, CLIENT *);
extern  void * mount1_umntall_1_svc(void *, struct svc_req *);
#define MOUNT1_EXPORT 5
extern  exports * mount1_export_1(void *, CLIENT *);
extern  exports * mount1_export_1_svc(void *, struct svc_req *);
extern int mount_program_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define MOUNT1_NULL 0
extern  void * mount1_null_1();
extern  void * mount1_null_1_svc();
#define MOUNT1_MNT 1
extern  mountres1 * mount1_mnt_1();
extern  mountres1 * mount1_mnt_1_svc();
#define MOUNT1_DUMP 2
extern  mountlist * mount1_dump_1();
extern  mountlist * mount1_dump_1_svc();
#define MOUNT1_UMNT 3
extern  void * mount1_umnt_1();
extern  void * mount1_umnt_1_svc();
#define MOUNT1_UMNTALL 4
extern  void * mount1_umntall_1();
extern  void * mount1_umntall_1_svc();
#define MOUNT1_EXPORT 5
extern  exports * mount1_export_1();
extern  exports * mount1_export_1_svc();
extern int mount_program_1_freeresult ();
#endif /* K&R C */
#define MOUNT_V3 3

#if defined(__STDC__) || defined(__cplusplus)
#define MOUNT3_NULL 0
extern  void * mount3_null_3(void *, CLIENT *);
extern  void * mount3_null_3_svc(void *, struct svc_req *);
#define MOUNT3_MNT 1
extern  mountres3 * mount3_mnt_3(dirpath *, CLIENT *);
extern  mountres3 * mount3_mnt_3_svc(dirpath *, struct svc_req *);
#define MOUNT3_DUMP 2
extern  mountlist * mount3_dump_3(void *, CLIENT *);
extern  mountlist * mount3_dump_3_svc(void *, struct svc_req *);
#define MOUNT3_UMNT 3
extern  void * mount3_umnt_3(dirpath *, CLIENT *);
extern  void * mount3_umnt_3_svc(dirpath *, struct svc_req *);
#define MOUNT3_UMNTALL 4
extern  void * mount3_umntall_3(void *, CLIENT *);
extern  void * mount3_umntall_3_svc(void *, struct svc_req *);
#define MOUNT3_EXPORT 5
extern  exports * mount3_export_3(void *, CLIENT *);
extern  exports * mount3_export_3_svc(void *, struct svc_req *);
extern int mount_program_3_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define MOUNT3_NULL 0
extern  void * mount3_null_3();
extern  void * mount3_null_3_svc();
#define MOUNT3_MNT 1
extern  mountres3 * mount3_mnt_3();
extern  mountres3 * mount3_mnt_3_svc();
#define MOUNT3_DUMP 2
extern  mountlist * mount3_dump_3();
extern  mountlist * mount3_dump_3_svc();
#define MOUNT3_UMNT 3
extern  void * mount3_umnt_3();
extern  void * mount3_umnt_3_svc();
#define MOUNT3_UMNTALL 4
extern  void * mount3_umntall_3();
extern  void * mount3_umntall_3_svc();
#define MOUNT3_EXPORT 5
extern  exports * mount3_export_3();
extern  exports * mount3_export_3_svc();
extern int mount_program_3_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_fhandle3 (XDR *, fhandle3*);
extern  bool_t xdr_dirpath (XDR *, dirpath*);
extern  bool_t xdr_name (XDR *, name*);
extern  bool_t xdr_mountstat3 (XDR *, mountstat3*);
extern  bool_t xdr_mountlist (XDR *, mountlist*);
extern  bool_t xdr_mountbody (XDR *, mountbody*);
extern  bool_t xdr_groups (XDR *, groups*);
extern  bool_t xdr_groupnode (XDR *, groupnode*);
extern  bool_t xdr_exports (XDR *, exports*);
extern  bool_t xdr_exportnode (XDR *, exportnode*);
extern  bool_t xdr_mountres3_ok (XDR *, mountres3_ok*);
extern  bool_t xdr_mountres3 (XDR *, mountres3*);
extern  bool_t xdr_mountstat1 (XDR *, mountstat1*);
extern  bool_t xdr_fhandle1 (XDR *, fhandle1);
extern  bool_t xdr_mountres1_ok (XDR *, mountres1_ok*);
extern  bool_t xdr_mountres1 (XDR *, mountres1*);

#else /* K&R C */
extern bool_t xdr_fhandle3 ();
extern bool_t xdr_dirpath ();
extern bool_t xdr_name ();
extern bool_t xdr_mountstat3 ();
extern bool_t xdr_mountlist ();
extern bool_t xdr_mountbody ();
extern bool_t xdr_groups ();
extern bool_t xdr_groupnode ();
extern bool_t xdr_exports ();
extern bool_t xdr_exportnode ();
extern bool_t xdr_mountres3_ok ();
extern bool_t xdr_mountres3 ();
extern bool_t xdr_mountstat1 ();
extern bool_t xdr_fhandle1 ();
extern bool_t xdr_mountres1_ok ();
extern bool_t xdr_mountres1 ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MOUNT_H_RPCGEN */
